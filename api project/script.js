const fs = require('fs');
const axios = require('axios');

// Nome do arquivo onde os dados da API serão salvos localmente
const dataFileName = 'valorant-agents.json';

// Função para carregar os dados da API a partir do arquivo local
function loadDataFromFile() {
  try {
    const data = fs.readFileSync(dataFileName, 'utf8');
    return JSON.parse(data);
  } catch (error) {
    console.error('Ocorreu um erro ao carregar os dados do arquivo:', error.message);
    return null;
  }
}

// Função para buscar os agentes da API e salvá-los em um arquivo local
async function fetchAndSaveData() {
  try {
    // Fazer uma solicitação GET à API
    const response = await axios.get('https://valorant-api.com/v1/agents');

    // Verificar se a solicitação foi bem-sucedida (código de resposta 200)
    if (response.status === 200) {
      // Salvar os dados da API em um arquivo local
      fs.writeFileSync(dataFileName, JSON.stringify(response.data));
      console.log('Dados da API salvos com sucesso.');
    } else {
      console.error('Erro na solicitação. Código de resposta:', response.status);
    }
  } catch (error) {
    console.error('Ocorreu um erro:', error.message);
  }
}

// Exemplo de como usar os dados da API
const agentsData = loadDataFromFile();
if (agentsData) {
  agentsData.data.forEach(agent => {
    console.log(agent.displayName);
    console.log(agent.description);
    console.log();
  });
} else {
  console.log('Os dados não estão disponíveis localmente. Buscando os dados da API...');
  // Se os dados não estiverem disponíveis localmente, buscar os dados da API
  fetchAndSaveData();
}
