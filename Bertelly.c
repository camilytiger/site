!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>FinançaControl - Investimentos</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link href="https://unpkg.com/aos@2.3.1/dist/aos.css" rel="stylesheet">
    <script src="https://unpkg.com/aos@2.3.1/dist/aos.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/feather-icons/dist/feather.min.js"></script>
    <script src="https://unpkg.com/feather-icons"></script>
    <style>
        .gradient-bg {
            background: linear-gradient(135deg, #000000 0%, #1a1a1a 50%, #800000 100%);
        }
        .chart-container {
            height: 300px;
        }
        .glow:hover {
            box-shadow: 0 0 15px rgba(255, 0, 0, 0.5);
        }
        .investment-card:hover {
            transform: translateY(-5px);
            transition: all 0.3s ease;
        }
    </style>
</head>
<body class="bg-black text-gray-100 min-h-screen">
    <!-- Navbar -->
    <nav class="bg-black border-b border-red-900">
        <div class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
            <div class="flex items-center justify-between h-16">
                <div class="flex items-center">
                    <div class="flex-shrink-0">
                        <span class="text-red-600 font-bold text-xl">Finança<span class="text-white">Control</span></span>
                    </div>
                    <div class="hidden md:block">
                        <div class="ml-10 flex items-baseline space-x-4">
                            <a href="index.html" class="text-gray-300 hover:bg-red-900 hover:text-white px-3 py-2 rounded-md text-sm font-medium">Dashboard</a>
                            <a href="#" class="bg-red-900 text-white px-3 py-2 rounded-md text-sm font-medium">Investimentos</a>
                            <a href="#" class="text-gray-300 hover:bg-red-900 hover:text-white px-3 py-2 rounded-md text-sm font-medium">Relatórios</a>
                            <a href="#" class="text-gray-300 hover:bg-red-900 hover:text-white px-3 py-2 rounded-md text-sm font-medium">Metas</a>
                        </div>
                    </div>
                </div>
                <div class="hidden md:block">
                    <div class="ml-4 flex items-center md:ml-6">
                        <button class="bg-black p-1 rounded-full text-gray-400 hover:text-white focus:outline-none">
                            <i data-feather="bell"></i>
                        </button>
                        <div class="ml-3 relative">
                            <div class="flex items-center">
                                <span class="text-white mr-2">Olá, Usuário</span>
                                <img class="h-8 w-8 rounded-full" src="http://static.photos/people/200x200/1" alt="">
                            </div>
                        </div>
                    </div>
                </div>
                <div class="-mr-2 flex md:hidden">
                    <button type="button" class="bg-black inline-flex items-center justify-center p-2 rounded-md text-gray-400 hover:text-white focus:outline-none">
                        <i data-feather="menu"></i>
                    </button>
                </div>
            </div>
        </div>
    </nav>

    <!-- Main Content -->
    <main class="gradient-bg">
        <div class="max-w-7xl mx-auto py-6 sm:px-6 lg:px-8">
            <!-- Header -->
            <div class="px-4 py-6 sm:px-0">
                <div class="flex justify-between items-center">
                    <div>
                        <h1 class="text-3xl font-bold text-white">Meus Investimentos</h1>
                        <p class="mt-2 text-gray-300">Acompanhe e gerencie sua carteira de investimentos</p>
                    </div>
                    <button class="bg-red-900 hover:bg-red-800 text-white px-4 py-2 rounded-md text-sm font-medium flex items-center">
                        <i data-feather="plus" class="mr-2"></i> Novo Investimento
                    </button>
                </div>
            </div>

            <!-- Resumo de Investimentos -->
            <div class="grid grid-cols-1 md:grid-cols-4 gap-6 mb-6">
                <div class="bg-gray-900 rounded-lg shadow-lg p-6 glow" data-aos="fade-up">
                    <div class="flex items-center justify-between">
                        <div>
                            <p class="text-gray-400">Total Investido</p>
                            <h3 class="text-2xl font-bold text-white mt-2">R$ 25.780,00</h3>
                        </div>
                        <div class="bg-red-900 p-3 rounded-full">
                            <i data-feather="dollar-sign" class="text-white"></i>
                        </div>
                    </div>
                    <div class="mt-4">
                        <p class="text-green-400 flex items-center">
                            <i data-feather="trending-up" class="mr-1"></i> 8,5% no último mês
                        </p>
                    </div>
                </div>

                <div class="bg-gray-900 rounded-lg shadow-lg p-6 glow" data-aos="fade-up" data-aos-delay="100">
                    <div class="flex items-center justify-between">
                        <div>
                            <p class="text-gray-400">Rendimento</p>
                            <h3 class="text-2xl font-bold text-white mt-2">R$ 1.250,00</h3>
                        </div>
                        <div class="bg-green-900 p-3 rounded-full">
                            <i data-feather="arrow-up-right" class="text-white"></i>
                        </div>
                    </div>
                    <div class="mt-4">
                        <p class="text-green-400 flex items-center">
                            <i data-feather="trending-up" class="mr-1"></i> 5,1% no último mês
                        </p>
                    </div>
                </div>

                <div class="bg-gray-900 rounded-lg shadow-lg p-6 glow" data-aos="fade-up" data-aos-delay="200">
                    <div class="flex items-center justify-between">
                        <div>
                            <p class="text-gray-400">Risco Médio</p>
                            <h3 class="text-2xl font-bold text-white mt-2">Moderado</h3>
                        </div>
                        <div class="bg-yellow-600 p-3 rounded-full">
                            <i data-feather="alert-triangle" class="text-white"></i>
                        </div>
                    </div>
                    <div class="mt-4">
                        <p class="text-yellow-400 flex items-center">
                            <i data-feather="info" class="mr-1"></i> 60% ações, 40% renda fixa
                        </p>
                    </div>
                </div>

                <div class="bg-gray-900 rounded-lg shadow-lg p-6 glow" data-aos="fade-up" data-aos-delay="300">
                    <div class="flex items-center justify-between">
                        <div>
                            <p class="text-gray-400">Diversificação</p>
                            <h3 class="text-2xl font-bold text-white mt-2">7 Ativos</h3>
                        </div>
                        <div class="bg-blue-900 p-3 rounded-full">
                            <i data-feather="layers" class="text-white"></i>
                        </div>
                    </div>
                    <div class="mt-4">
                        <p class="text-blue-400 flex items-center">
                            <i data-feather="pie-chart" class="mr-1"></i> 4 setores diferentes
                        </p>
                    </div>
                </div>
            </div>

            <!-- Gráfico de Alocação -->
            <div class="grid grid-cols-1 lg:grid-cols-2 gap-6 mb-6">
                <div class="bg-gray-900 rounded-lg shadow-lg p-6" data-aos="fade-right">
                    <div class="flex justify-between items-center mb-4">
                        <h2 class="text-xl font-bold text-white">Alocação de Ativos</h2>
                        <select class="bg-gray-800 text-white text-sm rounded-md px-3 py-1">
                            <option>Por Tipo</option>
                            <option>Por Setor</option>
                            <option>Por Risco</option>
                        </select>
                    </div>
                    <div class="chart-container">
                        <canvas id="allocationChart"></canvas>
                    </div>
                </div>

                <div class="bg-gray-900 rounded-lg shadow-lg p-6" data-aos="fade-left">
                    <div class="flex justify-between items-center mb-4">
                        <h2 class="text-xl font-bold text-white">Desempenho</h2>
                        <select class="bg-gray-800 text-white text-sm rounded-md px-3 py-1">
                            <option>Últimos 3 meses</option>
                            <option>Últimos 6 meses</option>
                            <option>Últimos 12 meses</option>
                        </select>
                    </div>
                    <div class="chart-container">
                        <canvas id="performanceChart"></canvas>
                    </div>
                </div>
            </div>

            <!-- Carteira de Investimentos -->
            <div class="bg-gray-900 rounded-lg shadow-lg p-6 mb-6" data-aos="fade-up">
                <div class="flex justify-between items-center mb-6">
                    <h2 class="text-xl font-bold text-white">Minha Carteira</h2>
                    <div class="flex space-x-2">
                        <button class="bg-gray-800 hover:bg-gray-700 text-white px-3 py-1 rounded-md text-sm font-medium">
                            <i data-feather="filter" class="mr-1"></i> Filtrar
                        </button>
                        <button class="bg-gray-800 hover:bg-gray-700 text-white px-3 py-1 rounded-md text-sm font-medium">
                            <i data-feather="download" class="mr-1"></i> Exportar
                        </button>
                    </div>
                </div>
                
                <div class="overflow-x-auto">
                    <table class="min-w-full divide-y divide-gray-800">
                        <thead>
                            <tr>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Ativo</th>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Tipo</th>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Quantidade</th>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Preço Médio</th>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Valor Investido</th>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Valor Atual</th>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Rentabilidade</th>
                                <th class="px-4 py-3 text-left text-xs font-medium text-gray-400 uppercase tracking-wider">Ações</th>
                            </tr>
                        </thead>
                        <tbody class="divide-y divide-gray-800">
                            <tr>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <div class="flex items-center">
                                        <div class="flex-shrink-0 h-10 w-10">
                                            <img class="h-10 w-10 rounded-full" src="http://static.photos/finance/200x200/1" alt="">
                                        </div>
                                        <div class="ml-4">
                                            <div class="text-sm font-medium text-white">PETR4</div>
                                            <div class="text-sm text-gray-400">Petrobras</div>
                                        </div>
                                    </div>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-gray-400">Ações</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">100</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 28,50</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 2.850,00</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 3.200,00</td>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <span class="px-2 inline-flex text-xs leading-5 font-semibold rounded-full bg-green-900 text-green-100">
                                        +12,28%
                                    </span>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm font-medium">
                                    <button class="text-red-400 hover:text-red-300 mr-3">
                                        <i data-feather="edit"></i>
                                    </button>
                                    <button class="text-gray-400 hover:text-gray-300">
                                        <i data-feather="trash-2"></i>
                                    </button>
                                </td>
                            </tr>
                            <tr>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <div class="flex items-center">
                                        <div class="flex-shrink-0 h-10 w-10">
                                            <img class="h-10 w-10 rounded-full" src="http://static.photos/finance/200x200/2" alt="">
                                        </div>
                                        <div class="ml-4">
                                            <div class="text-sm font-medium text-white">BOVA11</div>
                                            <div class="text-sm text-gray-400">ETF Ibovespa</div>
                                        </div>
                                    </div>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-gray-400">ETF</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">50</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 102,40</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 5.120,00</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 5.450,00</td>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <span class="px-2 inline-flex text-xs leading-5 font-semibold rounded-full bg-green-900 text-green-100">
                                        +6,45%
                                    </span>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm font-medium">
                                    <button class="text-red-400 hover:text-red-300 mr-3">
                                        <i data-feather="edit"></i>
                                    </button>
                                    <button class="text-gray-400 hover:text-gray-300">
                                        <i data-feather="trash-2"></i>
                                    </button>
                                </td>
                            </tr>
                            <tr>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <div class="flex items-center">
                                        <div class="flex-shrink-0 h-10 w-10">
                                            <img class="h-10 w-10 rounded-full" src="http://static.photos/finance/200x200/3" alt="">
                                        </div>
                                        <div class="ml-4">
                                            <div class="text-sm font-medium text-white">CDB 110% CDI</div>
                                            <div class="text-sm text-gray-400">Banco XYZ</div>
                                        </div>
                                    </div>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-gray-400">Renda Fixa</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">-</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">-</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 10.000,00</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 10.350,00</td>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <span class="px-2 inline-flex text-xs leading-5 font-semibold rounded-full bg-green-900 text-green-100">
                                        +3,50%
                                    </span>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm font-medium">
                                    <button class="text-red-400 hover:text-red-300 mr-3">
                                        <i data-feather="edit"></i>
                                    </button>
                                    <button class="text-gray-400 hover:text-gray-300">
                                        <i data-feather="trash-2"></i>
                                    </button>
                                </td>
                            </tr>
                            <tr>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <div class="flex items-center">
                                        <div class="flex-shrink-0 h-10 w-10">
                                            <img class="h-10 w-10 rounded-full" src="http://static.photos/finance/200x200/4" alt="">
                                        </div>
                                        <div class="ml-4">
                                            <div class="text-sm font-medium text-white">BTC</div>
                                            <div class="text-sm text-gray-400">Bitcoin</div>
                                        </div>
                                    </div>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-gray-400">Criptomoeda</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">0.05</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 150.000,00</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 7.500,00</td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm text-white">R$ 6.800,00</td>
                                <td class="px-4 py-4 whitespace-nowrap">
                                    <span class="px-2 inline-flex text-xs leading-5 font-semibold rounded-full bg-red-900 text-red-100">
                                        -9,33%
                                    </span>
                                </td>
                                <td class="px-4 py-4 whitespace-nowrap text-sm font-medium">
                                    <button class="text-red-400 hover:text-red-300 mr-3">
                                        <i data-feather="edit"></i>
                                    </button>
                                    <button class="text-gray-400 hover:text-gray-300">
                                        <i data-feather="trash-2"></i>
                                    </button>
                                </td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </div>

            <!-- Sugestões de Investimento -->
            <div class="bg-gray-900 rounded-lg shadow-lg p-6" data-aos="fade-up">
                <div class="flex justify-between items-center mb-6">
                    <h2 class="text-xl font-bold text-white">Sugestões para Você</h2>
                    <button class="text-red-400 text-sm font-medium">Ver todas</button>
                </div>
                
                <div class="grid grid-cols-1 md:grid-cols-3 gap-4">
                    <div class="bg-gray-800 p-4 rounded-lg investment-card">
                        <div class="flex items-center mb-3">
                            <img class="h-10 w-10 rounded-full mr-3" src="http://static.photos/finance/200x200/5" alt="">
                            <div>
                                <h3 class="font-medium text-white">IVVB11</h3>
                                <p class="text-xs text-gray-400">ETF S&P 500</p>
                            </div>
                        </div>
                        <div class="flex justify-between text-sm mb-2">
                            <span class="text-gray-400">Rentabilidade 12m</span>
                            <span class="text-green-400">+18,7%</span>
                        </div>
                        <div class="flex justify-between text-sm mb-2">
                            <span class="text-gray-400">Risco</span>
                            <span class="text-yellow-400">Médio</span>
                        </div>
                        <div class="flex justify-between text-sm mb-3">
                            <span class="text-gray-400">Preço</span>
                            <span class="text-white">R$ 245,90</span>
                        </div>
                        <button class="w-full bg-red-900 hover:bg-red-800 text-white px-3 py-2 rounded-md text-sm font-medium">
                            <i data-feather="plus" class="mr-1"></i> Adicionar
                        </button>
                    </div>
                    
                    <div class="bg-gray-800 p-4 rounded-lg investment-card">
                        <div class="flex items-center mb-3">
                            <img class="h-10 w-10 rounded-full mr-3" src="http://static.photos/finance/200x200/6" alt="">
                            <div>
                                <h3 class="font-medium text-white">LCA 90% CDI</h3>
                                <p class="text-xs text-gray-400">Banco ABC</p>
                            </div>
                        </div>
                        <div class="flex justify-between text-sm mb-2">
                            <span class="text-gray-400">Rentabilidade 12m</span>
                            <span class="text-green-400">+7,2%</span>
                        </div>
                        <div class="flex justify-between text-sm mb-2">
                            <span class="text-gray-400">Risco</span>
                            <span class="text-green-400">Baixo</span>
                        </div>
                        <div class="flex justify-between text-sm mb-3">
                            <span class="text-gray-400">Mínimo</span>
                            <span class="text-white">R$ 1.000,00</span>
                        </div>
                        <button class="w-full bg-red-900 hover:bg-red-800 text-white px-3 py-2 rounded-md text-sm font-medium">
                            <i data-feather="plus" class="mr-1"></i> Adicionar
                        </button>
                    </div>
                    
                    <div class="bg-gray-800 p-4 rounded-lg investment-card">
                        <div class="flex items-center mb-3">
                            <img class="h-10 w-10 rounded-full mr-3" src="http://static.photos/finance/200x200/7" alt="">
                            <div>
                                <h3 class="font-medium text-white">VALE3</h3>
                                <p class="text-xs text-gray-400">Vale S.A.</p>
                            </div>
                        </div>
                        <div class="flex justify-between text-sm mb-2">
                            <span class="text-gray-400">Rentabilidade 12m</span>
                            <span class="text-green-400">+22,1%</span>
                        </div>
                        <div class="flex justify-between text-sm mb-2">
                            <span class="text-gray-400">Risco</span>
                            <span class="text-red-400">Alto</span>
                        </div>
                        <div class="flex justify-between text-sm mb-3">
                            <span class="text-gray-400">Preço</span>
                            <span class="text-white">R$ 68,75</span>
                        </div>
                        <button class="w-full bg-red-900 hover:bg-red-800 text-white px-3 py-2 rounded-md text-sm font-medium">
                            <i data-feather="plus" class="mr-1"></i> Adicionar
                        </button>
                    </div>
                </div>
            </div>
        </div>
    </main>

    <!-- Footer -->
    <footer class="bg-black border-t border-red-900 mt-8">
        <div class="max-w-7xl mx-auto py-6 px-4 sm:px-6 lg:px-8">
            <div class="flex flex-col md:flex-row justify-between items-center">
                <div class="flex items-center">
                    <span class="text-red-600 font-bold text-xl">Finança<span class="text-white">Control</span></span>
                </div>
                <div class="mt-4 md:mt-0">
                    <p class="text-gray-400 text-sm">©️ 2023 FinançaControl. Todos os direitos reservados.</p>
                </div>
                <div class="mt-4 md:mt-0 flex space-x-4">
                    <a href="#" class="text-gray-400 hover:text-white">
                        <i data-feather="facebook"></i>
                    </a>
                    <a href="#" class="text-gray-400 hover:text-white">
                        <i data-feather="twitter"></i>
                    </a>
                    <a href="#" class="text-gray-400 hover:text-white">
                        <i data-feather="instagram"></i>
                    </a>
                    <a href="#" class="text-gray-400 hover:text-white">
                        <i data-feather="linkedin"></i>
                    </a>
                </div>
            </div>
        </div>
    </footer>

    <!-- Scripts -->
    <script src="https://cdn.jsdelivr.net/npm/chart.js"></script>
    <script>
        // Inicializa AOS
        AOS.init({
            duration: 800,
            easing: 'ease-in-out',
            once: true
        });

        // Inicializa Feather Icons
        feather.replace();

        // Gráfico de Alocação
        const allocationCtx = document.getElementById('allocationChart').getContext('2d');
        const allocationChart = new Chart(allocationCtx, {
            type: 'pie',
            data: {
                labels: ['Ações', 'ETF', 'Renda Fixa', 'Criptomoedas'],
                datasets: [{
                    data: [35, 25, 35, 5],
                    backgroundColor: [
                        '#991b1b',
                        '#dc2626',
                        '#ef4444',
                        '#f87171'
                    ],
                    borderWidth: 0
                }]
            },
            options: {
                responsive: true,
                maintainAspectRatio: false,
                plugins: {
                    legend: {
                        position: 'right',
                        labels: {
                            color: '#fff',
                            font: {
                                family: "'Inter', sans-serif"
                            }
                        }
                    }
                }
            }
        });

        // Gráfico de Desempenho
        const performanceCtx = document.getElementById('performanceChart').getContext('2d');
        const performanceChart = new Chart(performanceCtx, {
            type: 'line',
            data: {
                labels: ['Jan', 'Fev', 'Mar', 'Abr', 'Mai', 'Jun'],
                datasets: [{
                    label: 'Minha Carteira',
                    data: [20000, 21000, 21500, 22000, 23500, 25780],
                    borderColor: '#dc2626',
                    backgroundColor: 'rgba(220, 38, 38, 0.1)',
                    fill: true,
                    tension: 0.3
                }, {
                    label: 'CDI',
                    data: [20000, 20200, 20450, 20700, 21000, 21350],
                    borderColor: '#6b7280',
                    backgroundColor: 'rgba(107, 114, 128, 0.1)',
                    fill: true,
                    tension: 0.3,
                    borderDash: [5, 5]
                }]
            },
            options: {
                responsive: true,
                maintainAspectRatio: false,
                plugins: {
                    legend: {
                        labels: {
                            color: '#fff'
                        }
                    }
                },
                scales: {
                    y: {
                        grid: {
                            color: 'rgba(255, 255, 255, 0.1)'
                        },
                        ticks: {
                            color: '#fff'
                        }
                    },
                    x: {
                        grid: {
                            color: 'rgba(255, 255, 255, 0.1)'
                        },
                        ticks: {
                            color: '#fff'
                        }
                    }
                }
            }
        });
    </script>
</body>
</html>
