const express = require("express");
const axios = require("axios"); // Importe o módulo axios para fazer solicitações HTTP
const app = express();
const port = 3000;

app.use(express.json());

app.listen(port, () => {
    console.log(`Iniciando servidor na porta: ${port}`);
});

app.get('/api/mapas', async (req, res) => { // http://localhost:3000/api/mapas?mapa=Carro
    const { mapa } = req.query;

    if (!mapa) {
        res.status(400).json({ error: 'O parâmetro "mapa" é obrigatório.' });
        return;
    }

    try {
        const mapaEscolhido = getMap(mapa);
        const response = await axios.get(mapaEscolhido);

        // Extrair apenas os nomes dos mapas do resultado da API
        const mapNames = response.data.data.map(item => item.displayName);

        res.json({
            dataCalculo: new Date(),
            mapas: mapNames
        });
    } catch (error) {
        res.status(500).json({ error: 'Ocorreu um erro ao buscar dados da API.' });
    }
});

const mapsApi = 'https://valorant-api.com/v1/maps';

function getMap(mapa) {
    return `${mapsApi}?mapa=${mapa}`;
}
