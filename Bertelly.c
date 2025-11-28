<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Biblioteca Gavião Peixoto</title>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, sans-serif;
            background: linear-gradient(135deg, #000000 0%, #1a1a1a 50%, #22c55e 100%);
            color: #ffffff;
            line-height: 1.6;
            min-height: 100vh;
        }

        /* Header */
        .header {
            background: linear-gradient(135deg, #000000, #166534);
            padding: 2rem 0;
            box-shadow: 0 4px 20px rgba(34, 197, 94, 0.3);
            position: relative;
            overflow: hidden;
        }

        .header::before {
            content: '';
            position: absolute;
            top: -50%;
            left: -50%;
            width: 200%;
            height: 200%;
            background: linear-gradient(45deg, transparent, rgba(34, 197, 94, 0.1), transparent);
            animation: headerShine 6s linear infinite;
        }

        @keyframes headerShine {
            0% { transform: translateX(-100%) translateY(-100%) rotate(45deg); }
            100% { transform: translateX(100%) translateY(100%) rotate(45deg); }
        }

        .header-content {
            max-width: 1200px;
            margin: 0 auto;
            padding: 0 2rem;
            text-align: center;
            position: relative;
            z-index: 2;
        }

        .logo {
            display: inline-flex;
            align-items: center;
            justify-content: center;
            width: 80px;
            height: 80px;
            background: linear-gradient(135deg, #22c55e, #000000);
            border-radius: 50%;
            margin-bottom: 1rem;
            box-shadow: 0 10px 30px rgba(34, 197, 94, 0.5);
            animation: logoFloat 3s ease-in-out infinite;
        }

        @keyframes logoFloat {
            0%, 100% { transform: translateY(0px); }
            50% { transform: translateY(-10px); }
        }

        .logo svg {
            width: 40px;
            height: 40px;
            color: white;
        }

        .header h1 {
            font-size: 3rem;
            font-weight: 700;
            background: linear-gradient(135deg, #ffffff, #22c55e);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
            margin-bottom: 0.5rem;
        }

        .header p {
            font-size: 1.2rem;
            color: #a3a3a3;
        }

        /* Container */
        .container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 0 2rem;
        }

        /* Navigation */
        .nav {
            background: rgba(0, 0, 0, 0.9);
            padding: 1rem 0;
            backdrop-filter: blur(10px);
            border-bottom: 2px solid #22c55e;
        }

        .nav-content {
            max-width: 1200px;
            margin: 0 auto;
            padding: 0 2rem;
            display: flex;
            justify-content: center;
            gap: 2rem;
        }

        .nav-btn {
            background: linear-gradient(135deg, #166534, #22c55e);
            color: white;
            border: none;
            padding: 0.75rem 1.5rem;
            border-radius: 8px;
            cursor: pointer;
            font-size: 1rem;
            font-weight: 500;
            transition: all 0.3s ease;
            text-decoration: none;
            display: inline-block;
        }

        .nav-btn:hover {
            background: linear-gradient(135deg, #22c55e, #166534);
            transform: translateY(-2px);
            box-shadow: 0 8px 20px rgba(34, 197, 94, 0.4);
        }

        .nav-btn.active {
            background: linear-gradient(135deg, #22c55e, #000000);
            box-shadow: 0 0 20px rgba(34, 197, 94, 0.6);
        }

        /* Main Content */
        .main {
            padding: 3rem 0;
        }

        .section {
            margin-bottom: 4rem;
        }

        .section-title {
            font-size: 2.5rem;
            font-weight: 700;
            text-align: center;
            margin-bottom: 2rem;
            background: linear-gradient(135deg, #ffffff, #22c55e);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
        }

        /* Overdue Books */
        .overdue-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(350px, 1fr));
            gap: 1.5rem;
            margin-bottom: 2rem;
        }

        .overdue-card {
            background: linear-gradient(135deg, rgba(220, 38, 38, 0.1), rgba(0, 0, 0, 0.8));
            border: 2px solid #dc2626;
            border-radius: 16px;
            padding: 1.5rem;
            transition: all 0.3s ease;
        }

        .overdue-card:hover {
            transform: translateY(-5px);
            box-shadow: 0 15px 30px rgba(220, 38, 38, 0.3);
            border-color: #ef4444;
        }

        .overdue-header {
            display: flex;
            align-items: center;
            gap: 1rem;
            margin-bottom: 1rem;
        }

        .overdue-icon {
            width: 40px;
            height: 40px;
            background: #dc2626;
            border-radius: 50%;
            display: flex;
            align-items: center;
            justify-content: center;
        }

        .overdue-info h3 {
            color: #ffffff;
            font-size: 1.2rem;
            margin-bottom: 0.25rem;
        }

        .overdue-info p {
            color: #a3a3a3;
            font-size: 0.9rem;
        }

        .book-details {
            background: rgba(0, 0, 0, 0.5);
            border-radius: 8px;
            padding: 1rem;
            margin-top: 1rem;
        }

        .book-details h4 {
            color: #22c55e;
            margin-bottom: 0.5rem;
        }

        .book-details p {
            color: #d1d5db;
            font-size: 0.9rem;
        }

        .days-overdue {
            background: #dc2626;
            color: white;
            padding: 0.25rem 0.75rem;
            border-radius: 20px;
            font-size: 0.8rem;
            font-weight: 600;
            display: inline-block;
            margin-top: 0.5rem;
        }

        /* Books Grid */
        .books-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));
            gap: 2rem;
        }

        .book-card {
            background: linear-gradient(135deg, rgba(0, 0, 0, 0.8), rgba(34, 197, 94, 0.1));
            border: 2px solid #22c55e;
            border-radius: 16px;
            overflow: hidden;
            transition: all 0.3s ease;
            position: relative;
        }

        .book-card:hover {
            transform: translateY(-10px) scale(1.02);
            box-shadow: 0 20px 40px rgba(34, 197, 94, 0.3);
            border-color: #16a34a;
        }

        .book-image {
            width: 100%;
            height: 300px;
            object-fit: cover;
            border-bottom: 2px solid #22c55e;
        }

        .book-info {
            padding: 1.5rem;
        }

        .book-title {
            font-size: 1.3rem;
            font-weight: 700;
            color: #ffffff;
            margin-bottom: 0.5rem;
        }

        .book-author {
            color: #22c55e;
            font-size: 1rem;
            margin-bottom: 0.75rem;
        }

        .book-description {
            color: #a3a3a3;
            font-size: 0.9rem;
            margin-bottom: 1rem;
            line-height: 1.5;
        }

        .book-status {
            display: flex;
            justify-content: space-between;
            align-items: center;
        }

        .status-badge {
            padding: 0.5rem 1rem;
            border-radius: 20px;
            font-size: 0.8rem;
            font-weight: 600;
        }

        .available {
            background: #22c55e;
            color: white;
        }

        .borrowed {
            background: #eab308;
            color: #000;
        }

        .overdue-badge {
            background: #dc2626;
            color: white;
        }

        .book-id {
            color: #6b7280;
            font-size: 0.8rem;
        }

        /* Search Bar */
        .search-container {
            text-align: center;
            margin-bottom: 3rem;
        }

        .search-bar {
            max-width: 500px;
            margin: 0 auto;
            position: relative;
        }

        .search-input {
            width: 100%;
            padding: 1rem 1rem 1rem 3rem;
            background: rgba(0, 0, 0, 0.8);
            border: 2px solid #22c55e;
            border-radius: 50px;
            color: white;
            font-size: 1rem;
            outline: none;
            transition: all 0.3s ease;
        }

        .search-input:focus {
            border-color: #16a34a;
            box-shadow: 0 0 20px rgba(34, 197, 94, 0.3);
        }

        .search-input::placeholder {
            color: #a3a3a3;
        }

        .search-icon {
            position: absolute;
            left: 1rem;
            top: 50%;
            transform: translateY(-50%);
            color: #22c55e;
        }

        /* Statistics */
        .stats {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
            gap: 1.5rem;
            margin-bottom: 3rem;
        }

        .stat-card {
            background: linear-gradient(135deg, rgba(34, 197, 94, 0.1), rgba(0, 0, 0, 0.8));
            border: 1px solid #22c55e;
            border-radius: 12px;
            padding: 1.5rem;
            text-align: center;
            transition: all 0.3s ease;
        }

        .stat-card:hover {
            transform: translateY(-5px);
            box-shadow: 0 10px 25px rgba(34, 197, 94, 0.2);
        }

        .stat-number {
            font-size: 2.5rem;
            font-weight: 700;
            color: #22c55e;
            margin-bottom: 0.5rem;
        }

        .stat-label {
            color: #a3a3a3;
            font-size: 0.9rem;
        }

        /* Footer */
        .footer {
            background: linear-gradient(135deg, #000000, #166534);
            padding: 3rem 0 2rem;
            margin-top: 4rem;
            border-top: 3px solid #22c55e;
        }

        .footer-content {
            max-width: 1200px;
            margin: 0 auto;
            padding: 0 2rem;
            text-align: center;
        }

        .footer h3 {
            color: #22c55e;
            font-size: 1.5rem;
            margin-bottom: 1rem;
        }

        .developers {
            display: flex;
            flex-wrap: wrap;
            justify-content: center;
            gap: 1rem;
            margin-bottom: 2rem;
        }

        .developer {
            background: rgba(34, 197, 94, 0.1);
            border: 1px solid #22c55e;
            border-radius: 8px;
            padding: 0.75rem 1.5rem;
            color: #ffffff;
            font-weight: 500;
            transition: all 0.3s ease;
        }

        .developer:hover {
            background: #22c55e;
            color: #000000;
            transform: translateY(-2px);
        }

        .footer-bottom {
            color: #a3a3a3;
            font-size: 0.9rem;
            padding-top: 1rem;
            border-top: 1px solid #374151;
        }

        /* Responsive */
        @media (max-width: 768px) {
            .header h1 {
                font-size: 2rem;
            }
            
            .nav-content {
                flex-direction: column;
                gap: 1rem;
            }
            
            .overdue-grid {
                grid-template-columns: 1fr;
            }
            
            .books-grid {
                grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            }
            
            .developers {
                flex-direction: column;
                align-items: center;
            }
        }

        /* Hidden sections */
        .section.hidden {
            display: none;
        }

        /* Animation */
        .fade-in {
            animation: fadeIn 0.6s ease-in;
        }

        @keyframes fadeIn {
            from { opacity: 0; transform: translateY(20px); }
            to { opacity: 1; transform: translateY(0); }
        }
    </style>
</head>
<body>
    <!-- Header -->
    <header class="header">
        <div class="header-content">
            <div class="logo">
                <svg fill="none" stroke="currentColor" viewBox="0 0 24 24">
                    <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M12 6.253v13m0-13C10.832 5.477 9.246 5 7.5 5S4.168 5.477 3 6.253v13C4.168 18.477 5.754 18 7.5 18s3.332.477 4.5 1.253m0-13C13.168 5.477 14.754 5 16.5 5c1.746 0 3.332.477 4.5 1.253v13C19.832 18.477 18.246 18 16.5 18c-1.746 0-3.332.477-4.5 1.253"></path>
                </svg>
            </div>
            <h1>Biblioteca Gavião Peixoto</h1>
            <p>Sistema de Gerenciamento de Acervo</p>
        </div>
    </header>

    <!-- Navigation -->
    <nav class="nav">
        <div class="nav-content">
            <button class="nav-btn active" onclick="showSection('overdue')">Livros em Atraso</button>
            <button class="nav-btn" onclick="showSection('catalog')">Catálogo</button>
            <button class="nav-btn" onclick="showSection('stats')">Estatísticas</button>
        </div>
    </nav>

    <!-- Main Content -->
    <main class="main">
        <div class="container">
            <!-- Statistics Section -->
            <section id="stats-section" class="section hidden">
                <h2 class="section-title">Estatísticas da Biblioteca</h2>
                <div class="stats">
                    <div class="stat-card">
                        <div class="stat-number">1,247</div>
                        <div class="stat-label">Total de Livros</div>
                    </div>
                    <div class="stat-card">
                        <div class="stat-number">189</div>
                        <div class="stat-label">Livros Emprestados</div>
                    </div>
                    <div class="stat-card">
                        <div class="stat-number">23</div>
                        <div class="stat-label">Livros em Atraso</div>
                    </div>
                    <div class="stat-card">
                        <div class="stat-number">456</div>
                        <div class="stat-label">Usuários Ativos</div>
                    </div>
                </div>
            </section>

            <!-- Overdue Books Section -->
            <section id="overdue-section" class="section">
                <h2 class="section-title">📚 Livros em Atraso</h2>
                <div class="overdue-grid">
                    <div class="overdue-card fade-in">
                        <div class="overdue-header">
                            <div class="overdue-icon">
                                <svg width="20" height="20" fill="white" viewBox="0 0 24 24">
                                    <path d="M12 2C6.48 2 2 6.48 2 12s4.48 10 10 10 10-4.48 10-10S17.52 2 12 2zm-2 15l-5-5 1.41-1.41L10 14.17l7.59-7.59L19 8l-9 9z"/>
                                </svg>
                            </div>
                            <div class="overdue-info">
                                <h3>Maria Silva Santos</h3>
                                <p>Estudante - ID: 2023001</p>
                            </div>
                        </div>
                        <div class="book-details">
                            <h4>Dom Casmurro</h4>
                            <p><strong>Autor:</strong> Machado de Assis</p>
                            <p><strong>Data de Empréstimo:</strong> 15/11/2024</p>
                            <p><strong>Data de Devolução:</strong> 29/11/2024</p>
                            <span class="days-overdue">12 dias em atraso</span>
                        </div>
                    </div>

                    <div class="overdue-card fade-in">
                        <div class="overdue-header">
                            <div class="overdue-icon">
                                <svg width="20" height="20" fill="white" viewBox="0 0 24 24">
                                    <path d="M12 2C6.48 2 2 6.48 2 12s4.48 10 10 10 10-4.48 10-10S17.52 2 12 2zm-2 15l-5-5 1.41-1.41L10 14.17l7.59-7.59L19 8l-9 9z"/>
                                </svg>
                            </div>
                            <div class="overdue-info">
                                <h3>João Carlos Oliveira</h3>
                                <p>Professor - ID: 2022045</p>
                            </div>
                        </div>
                        <div class="book-details">
                            <h4>1984</h4>
                            <p><strong>Autor:</strong> George Orwell</p>
                            <p><strong>Data de Empréstimo:</strong> 10/11/2024</p>
                            <p><strong>Data de Devolução:</strong> 24/11/2024</p>
                            <span class="days-overdue">17 dias em atraso</span>
                        </div>
                    </div>

                    <div class="overdue-card fade-in">
                        <div class="overdue-header">
                            <div class="overdue-icon">
                                <svg width="20" height="20" fill="white" viewBox="0 0 24 24">
                                    <path d="M12 2C6.48 2 2 6.48 2 12s4.48 10 10 10 10-4.48 10-10S17.52 2 12 2zm-2 15l-5-5 1.41-1.41L10 14.17l7.59-7.59L19 8l-9 9z"/>
                                </svg>
                            </div>
                            <div class="overdue-info">
                                <h3>Ana Beatriz Costa</h3>
                                <p>Estudante - ID: 2023102</p>
                            </div>
                        </div>
                        <div class="book-details">
                            <h4>O Pequeno Príncipe</h4>
                            <p><strong>Autor:</strong> Antoine de Saint-Exupéry</p>
                            <p><strong>Data de Empréstimo:</strong> 05/11/2024</p>
                            <p><strong>Data de Devolução:</strong> 19/11/2024</p>
                            <span class="days-overdue">22 dias em atraso</span>
                        </div>
                    </div>

                    <div class="overdue-card fade-in">
                        <div class="overdue-header">
                            <div class="overdue-icon">
                                <svg width="20" height="20" fill="white" viewBox="0 0 24 24">
                                    <path d="M12 2C6.48 2 2 6.48 2 12s4.48 10 10 10 10-4.48 10-10S17.52 2 12 2zm-2 15l-5-5 1.41-1.41L10 14.17l7.59-7.59L19 8l-9 9z"/>
                                </svg>
                            </div>
                            <div class="overdue-info">
                                <h3>Roberto Ferreira Lima</h3>
                                <p>Funcionário - ID: 2021089</p>
                            </div>
                        </div>
                        <div class="book-details">
                            <h4>Sapiens</h4>
                            <p><strong>Autor:</strong> Yuval Noah Harari</p>
                            <p><strong>Data de Empréstimo:</strong> 28/10/2024</p>
                            <p><strong>Data de Devolução:</strong> 11/11/2024</p>
                            <span class="days-overdue">30 dias em atraso</span>
                        </div>
                    </div>

                    <div class="overdue-card fade-in">
                        <div class="overdue-header">
                            <div class="overdue-icon">
                                <svg width="20" height="20" fill="white" viewBox="0 0 24 24">
                                    <path d="M12 2C6.48 2 2 6.48 2 12s4.48 10 10 10 10-4.48 10-10S17.52 2 12 2zm-2 15l-5-5 1.41-1.41L10 14.17l7.59-7.59L19 8l-9 9z"/>
                                </svg>
                            </div>
                            <div class="overdue-info">
                                <h3>Lucia Montenegro</h3>
                                <p>Estudante - ID: 2023078</p>
                            </div>
                        </div>
                        <div class="book-details">
                            <h4>Harry Potter e a Pedra Filosofal</h4>
                            <p><strong>Autor:</strong> J.K. Rowling</p>
                            <p><strong>Data de Empréstimo:</strong> 20/10/2024</p>
                            <p><strong>Data de Devolução:</strong> 03/11/2024</p>
                            <span class="days-overdue">38 dias em atraso</span>
                        </div>
                    </div>

                    <div class="overdue-card fade-in">
                        <div class="overdue-header">
                            <div class="overdue-icon">
                                <svg width="20" height="20" fill="white" viewBox="0 0 24 24">
                                    <path d="M12 2C6.48 2 2 6.48 2 12s4.48 10 10 10 10-4.48 10-10S17.52 2 12 2zm-2 15l-5-5 1.41-1.41L10 14.17l7.59-7.59L19 8l-9 9z"/>
                                </svg>
                            </div>
                            <div class="overdue-info">
                                <h3>Pedro Henrique Alves</h3>
                                <p>Estudante - ID: 2023134</p>
                            </div>
                        </div>
                        <div class="book-details">
                            <h4>O Cortiço</h4>
                            <p><strong>Autor:</strong> Aluísio Azevedo</p>
                            <p><strong>Data de Empréstimo:</strong> 12/10/2024</p>
                            <p><strong>Data de Devolução:</strong> 26/10/2024</p>
                            <span class="days-overdue">46 dias em atraso</span>
                        </div>
                    </div>
                </div>
            </section>

            <!-- Catalog Section -->
            <section id="catalog-section" class="section hidden">
                <h2 class="section-title">📖 Catálogo de Livros</h2>
                
                <!-- Search Bar -->
                <div class="search-container">
                    <div class="search-bar">
                        <svg class="search-icon" width="20" height="20" fill="none" stroke="currentColor" viewBox="0 0 24 24">
                            <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M21 21l-6-6m2-5a7 7 0 11-14 0 7 7 0 0114 0z"></path>
                        </svg>
                        <input type="text" class="search-input" placeholder="Pesquisar livros, autores ou categorias..." id="searchInput">
                    </div>
                </div>

                <!-- Books Grid -->
                <div class="books-grid" id="booksGrid">
                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1544947950-fa07a98d237f?w=300&h=400&fit=crop" alt="Dom Casmurro" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">Dom Casmurro</h3>
                            <p class="book-author">Machado de Assis</p>
                            <p class="book-description">Um clássico da literatura brasileira que narra a história de Bentinho e sua obsessão por ciúmes.</p>
                            <div class="book-status">
                                <span class="status-badge borrowed">Emprestado</span>
                                <span class="book-id">ID: 001</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1481627834876-b7833e8f5570?w=300&h=400&fit=crop" alt="1984" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">1984</h3>
                            <p class="book-author">George Orwell</p>
                            <p class="book-description">Distopia clássica sobre vigilância, controle e manipulação em uma sociedade totalitária.</p>
                            <div class="book-status">
                                <span class="status-badge overdue-badge">Em Atraso</span>
                                <span class="book-id">ID: 002</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1507003211169-0a1dd7228f2d?w=300&h=400&fit=crop" alt="O Pequeno Príncipe" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">O Pequeno Príncipe</h3>
                            <p class="book-author">Antoine de Saint-Exupéry</p>
                            <p class="book-description">Uma fábula poética sobre amizade, amor e a natureza humana vista através dos olhos de uma criança.</p>
                            <div class="book-status">
                                <span class="status-badge overdue-badge">Em Atraso</span>
                                <span class="book-id">ID: 003</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1512820790803-83ca734da794?w=300&h=400&fit=crop" alt="Sapiens" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">Sapiens</h3>
                            <p class="book-author">Yuval Noah Harari</p>
                            <p class="book-description">Uma jornada pela história da humanidade, desde os primórdios até os desafios do futuro.</p>
                            <div class="book-status">
                                <span class="status-badge overdue-badge">Em Atraso</span>
                                <span class="book-id">ID: 004</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1589998059171-988d887df646?w=300&h=400&fit=crop" alt="Harry Potter" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">Harry Potter e a Pedra Filosofal</h3>
                            <p class="book-author">J.K. Rowling</p>
                            <p class="book-description">O início da jornada mágica do jovem bruxo Harry Potter em Hogwarts.</p>
                            <div class="book-status">
                                <span class="status-badge overdue-badge">Em Atraso</span>
                                <span class="book-id">ID: 005</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1516979187457-637abb4f9353?w=300&h=400&fit=crop" alt="O Cortiço" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">O Cortiço</h3>
                            <p class="book-author">Aluísio Azevedo</p>
                            <p class="book-description">Romance naturalista que retrata a vida em um cortiço no Rio de Janeiro do século XIX.</p>
                            <div class="book-status">
                                <span class="status-badge overdue-badge">Em Atraso</span>
                                <span class="book-id">ID: 006</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1544716278-ca5e3f4abd8c?w=300&h=400&fit=crop" alt="O Alquimista" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">O Alquimista</h3>
                            <p class="book-author">Paulo Coelho</p>
                            <p class="book-description">A jornada de Santiago em busca de seu tesouro pessoal e dos sonhos da vida.</p>
                            <div class="book-status">
                                <span class="status-badge available">Disponível</span>
                                <span class="book-id">ID: 007</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1481627834876-b7833e8f5570?w=300&h=400&fit=crop" alt="Cem Anos de Solidão" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">Cem Anos de Solidão</h3>
                            <p class="book-author">Gabriel García Márquez</p>
                            <p class="book-description">Obra-prima do realismo mágico que narra a saga da família Buendía.</p>
                            <div class="book-status">
                                <span class="status-badge available">Disponível</span>
                                <span class="book-id">ID: 008</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1554415707-6e8cfc93fe23?w=300&h=400&fit=crop" alt="O Senhor dos Anéis" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">O Senhor dos Anéis: A Sociedade do Anel</h3>
                            <p class="book-author">J.R.R. Tolkien</p>
                            <p class="book-description">Épica fantasia sobre a jornada de Frodo para destruir o Um Anel.</p>
                            <div class="book-status">
                                <span class="status-badge borrowed">Emprestado</span>
                                <span class="book-id">ID: 009</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1507003211169-0a1dd7228f2d?w=300&h=400&fit=crop" alt="Memórias Póstumas" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">Memórias Póstumas de Brás Cubas</h3>
                            <p class="book-author">Machado de Assis</p>
                            <p class="book-description">Romance inovador narrado por um defunto autor sobre sua própria vida.</p>
                            <div class="book-status">
                                <span class="status-badge available">Disponível</span>
                                <span class="book-id">ID: 010</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1589998059171-988d887df646?w=300&h=400&fit=crop" alt="Percy Jackson" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">Percy Jackson e o Ladrão de Raios</h3>
                            <p class="book-author">Rick Riordan</p>
                            <p class="book-description">Aventura de um jovem meio-sangue descobrindo sua herança divina.</p>
                            <div class="book-status">
                                <span class="status-badge available">Disponível</span>
                                <span class="book-id">ID: 011</span>
                            </div>
                        </div>
                    </div>

                    <div class="book-card fade-in">
                        <img src="https://images.unsplash.com/photo-1512820790803-83ca734da794?w=300&h=400&fit=crop" alt="Homo Deus" class="book-image">
                        <div class="book-info">
                            <h3 class="book-title">Homo Deus</h3>
                            <p class="book-author">Yuval Noah Harari</p>
                            <p class="book-description">Uma visão sobre o futuro da humanidade e os desafios do século XXI.</p>
                            <div class="book-status">
                                <span class="status-badge borrowed">Emprestado</span>
                                <span class="book-id">ID: 012</span>
                            </div>
                        </div>
                    </div>
                </div>
            </section>
        </div>
    </main>

    <!-- Footer -->
    <footer class="footer">
        <div class="footer-content">
            <h3>Desenvolvido por</h3>
            <div class="developers">
                <div class="developer">João Bertelli</div>
                <div class="developer">Marlon Mendeiros</div>
                <div class="developer">Samio Souto</div>
                <div class="developer">Andre Rocha</div>
                <div class="developer">Kaue do Nascimento</div>
            </div>
            <div class="footer-bottom">
                <p>&copy; 2024 Biblioteca Gavião Peixoto. Todos os direitos reservados.</p>
                <p>Sistema de Gerenciamento de Biblioteca</p>
            </div>
        </div>
    </footer>

    <script>
        // Navigation functionality
        function showSection(sectionName) {
            // Hide all sections
            const sections = document.querySelectorAll('.section');
            sections.forEach(section => {
                section.classList.add('hidden');
            });

            // Remove active class from all nav buttons
            const navButtons = document.querySelectorAll('.nav-btn');
            navButtons.forEach(btn => {
                btn.classList.remove('active');
            });

            // Show selected section
            const targetSection = document.getElementById(sectionName + '-section');
            if (targetSection) {
                targetSection.classList.remove('hidden');
                targetSection.classList.add('fade-in');
            }

            // Add active class to clicked button
            event.target.classList.add('active');
        }

        // Search functionality
        const searchInput = document.getElementById('searchInput');
        const booksGrid = document.getElementById('booksGrid');

        if (searchInput) {
            searchInput.addEventListener('input', function() {
                const searchTerm = this.value.toLowerCase();
                const bookCards = booksGrid.querySelectorAll('.book-card');

                bookCards.forEach(card => {
                    const title = card.querySelector('.book-title').textContent.toLowerCase();
                    const author = card.querySelector('.book-author').textContent.toLowerCase();
                    
                    if (title.includes(searchTerm) || author.includes(searchTerm)) {
                        card.style.display = 'block';
                    } else {
                        card.style.display = 'none';
                    }
                });
            });
        }

        // Add animation to cards on scroll
        const observerOptions = {
            threshold: 0.1,
            rootMargin: '0px 0px -50px 0px'
        };

        const observer = new IntersectionObserver(function(entries) {
            entries.forEach(entry => {
                if (entry.isIntersecting) {
                    entry.target.classList.add('fade-in');
                }
            });
        }, observerOptions);

        // Observe all cards
        document.querySelectorAll('.book-card, .overdue-card, .stat-card').forEach(card => {
            observer.observe(card);
        });

        // Update overdue days dynamically
        function updateOverdueDays() {
            const overdueBadges = document.querySelectorAll('.days-overdue');
            overdueBadges.forEach(badge => {
                const currentDays = parseInt(badge.textContent.match(/\d+/)[0]);
                // This would normally calculate based on actual dates
                // For demo purposes, we're just showing static numbers
            });
        }

        // Initialize
        document.addEventListener('DOMContentLoaded', function() {
            updateOverdueDays();
        });
    </script>
</body>
</html>
