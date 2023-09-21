const fs = require('fs');
const axios = require('axios');
const readline = require('readline');

// Nome do arquivo onde os dados dos maps serão salvos localmente
const mapsDataFileName = 'valorant-maps.json';
// Nome do arquivo onde os dados dos agentes serão salvos localmente
const agentsDataFileName = 'valorant-agents.json';

// Função para carregar os dados dos maps a partir do arquivo local
function loadMapsDataFromFile() {
  try {
    const data = fs.readFileSync(mapsDataFileName, 'utf8');
    return JSON.parse(data);
  } catch (error) {
    console.error('Ocorreu um erro ao carregar os dados dos maps do arquivo:', error.message);
    return null;
  }
}

// Função para carregar os dados dos agentes a partir do arquivo local
function loadAgentsDataFromFile() {
  try {
    const data = fs.readFileSync(agentsDataFileName, 'utf8');
    return JSON.parse(data);
  } catch (error) {
    console.error('Ocorreu um erro ao carregar os dados dos agentes do arquivo:', error.message);
    return null;
  }
}

// URL da API de maps
const mapsApiUrl = 'https://valorant-api.com/v1/maps';
// URL da API de agentes
const agentsApiUrl = 'https://valorant-api.com/v1/agents';

// Função para buscar os dados dos maps da API e salvá-los em um arquivo local
async function fetchAndSaveMapsData() {
  try {
    // Fazer uma solicitação GET à API de maps
    const response = await axios.get(mapsApiUrl);

    // Verificar se a solicitação foi bem-sucedida (código de resposta 200)
    if (response.status === 200) {
      // Salvar os dados dos maps da API em um arquivo local
      fs.writeFileSync(mapsDataFileName, JSON.stringify(response.data));
      console.log('Dados dos maps da API salvos com sucesso.');
    } else {
      console.error('Erro na solicitação dos maps. Código de resposta:', response.status);
    }
  } catch (error) {
    console.error('Ocorreu um erro ao buscar os maps:', error.message);
  }
}

// Função para buscar os dados dos agentes da API e salvá-los em um arquivo local
async function fetchAndSaveAgentsData() {
  try {
    // Fazer uma solicitação GET à API de agentes
    const response = await axios.get(agentsApiUrl);

    // Verificar se a solicitação foi bem-sucedida (código de resposta 200)
    if (response.status === 200) {
      // Salvar os dados dos agentes da API em um arquivo local
      fs.writeFileSync(agentsDataFileName, JSON.stringify(response.data));
      console.log('Dados dos agentes da API salvos com sucesso.');
    } else {
      console.error('Erro na solicitação dos agentes. Código de resposta:', response.status);
    }
  } catch (error) {
    console.error('Ocorreu um erro ao buscar os agentes:', error.message);
  }
}

// Função para selecionar aleatoriamente 5 agentes
function selectRandomAgents(agentsData, count = 5) {
  const selectedAgents = [];
  const totalAgents = agentsData.data.length;

  for (let i = 0; i < count; i++) {
    const randomIndex = Math.floor(Math.random() * totalAgents);
    const randomAgent = agentsData.data[randomIndex];
    selectedAgents.push(randomAgent);
  }

  return selectedAgents;
}

// Função para obter a descrição de um mapa a partir do nome
function getMapDescription(mapsData, mapName) {
  const map = mapsData.data.find(map => map.displayName.toLowerCase() === mapName.toLowerCase());
  return map ? map.description : 'Mapa não encontrado.';
}

// Interface para leitura de entrada do usuário
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// Função principal
async function main() {
  // Carregar os dados dos maps (ou buscar da API se não estiverem disponíveis localmente)
  let mapsData = loadMapsDataFromFile();
  if (!mapsData) {
    await fetchAndSaveMapsData();
    mapsData = loadMapsDataFromFile();
  }

  // Carregar os dados dos agentes (ou buscar da API se não estiverem disponíveis localmente)
  let agentsData = loadAgentsDataFromFile();
  if (!agentsData) {
    await fetchAndSaveAgentsData();
    agentsData = loadAgentsDataFromFile();
  }

  // Obter entrada do usuário para selecionar um mapa
  rl.question('Digite o nome de um mapa (por exemplo, "Ascent"): ', mapName => {
    const mapDescription = getMapDescription(mapsData, mapName);
    
    if (mapDescription === 'Mapa não encontrado.') {
      console.error(mapDescription);
      rl.close();
    } else {
      console.log('Descrição do Mapa:', mapDescription);

      // Selecionar aleatoriamente 5 agentes
      const randomAgents = selectRandomAgents(agentsData);

      // Exibir informações dos agentes selecionados
      console.log('Agentes Selecionados:');
      randomAgents.forEach(agent => {
        console.log('Nome do Agente:', agent.displayName);
        console.log('Descrição do Agente:', agent.description);
        console.log();
      });
      
    rl.close();
  }
});
}

// Executar a função principal
main();
