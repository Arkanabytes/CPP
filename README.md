<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CPP Repository</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 20px;
            background: #1a1a2e;
            color: white;
        }
        
        .container {
            max-width: 1000px;
            margin: 0 auto;
        }
        
        .header {
            text-align: center;
            background: #16213e;
            padding: 40px 20px;
            border-radius: 10px;
            margin-bottom: 30px;
        }
        
        .title {
            font-size: 48px;
            margin-bottom: 10px;
            color: #4CAF50;
        }
        
        .subtitle {
            font-size: 18px;
            margin-bottom: 20px;
            color: #ccc;
        }
        
        .github-link {
            display: inline-block;
            background: #4CAF50;
            color: white;
            padding: 12px 24px;
            text-decoration: none;
            border-radius: 5px;
            font-weight: bold;
        }
        
        .github-link:hover {
            background: #45a049;
        }
        
        .cards {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
            gap: 20px;
            margin-bottom: 40px;
        }
        
        .card {
            background: #16213e;
            padding: 30px;
            border-radius: 10px;
            text-align: center;
        }
        
        .card-icon {
            font-size: 48px;
            margin-bottom: 20px;
        }
        
        .card-title {
            font-size: 24px;
            margin-bottom: 15px;
            color: #4CAF50;
        }
        
        .card-text {
            color: #ccc;
            line-height: 1.6;
        }
        
        .topics {
            background: #16213e;
            padding: 40px;
            border-radius: 10px;
            margin-bottom: 30px;
        }
        
        .section-title {
            font-size: 32px;
            text-align: center;
            margin-bottom: 30px;
            color: #4CAF50;
        }
        
        .topics-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(150px, 1fr));
            gap: 20px;
        }
        
        .topic-item {
            background: #1a1a2e;
            padding: 20px;
            border-radius: 8px;
            text-align: center;
        }
        
        .topic-icon {
            font-size: 32px;
            margin-bottom: 10px;
        }
        
        .topic-name {
            font-size: 16px;
            font-weight: bold;
        }
        
        .features {
            background: #16213e;
            padding: 40px;
            border-radius: 10px;
        }
        
        .features-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            gap: 15px;
        }
        
        .feature {
            display: flex;
            align-items: center;
            gap: 15px;
            padding: 15px;
            background: #1a1a2e;
            border-radius: 8px;
        }
        
        .feature-icon {
            font-size: 24px;
            color: #4CAF50;
        }
        
        .feature-text {
            color: #ccc;
        }
        
        .stats {
            display: flex;
            justify-content: center;
            gap: 40px;
            margin: 40px 0;
            flex-wrap: wrap;
        }
        
        .stat {
            text-align: center;
            background: #16213e;
            padding: 20px;
            border-radius: 10px;
            min-width: 120px;
        }
        
        .stat-number {
            font-size: 36px;
            font-weight: bold;
            color: #4CAF50;
        }
        
        .stat-label {
            color: #ccc;
            margin-top: 5px;
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="header">
            <h1 class="title">🚀 CPP Repository</h1>
            <p class="subtitle">Colección de problemas básicos de programación en C++</p>
            <a href="https://github.com/Arkanabytes/CPP" class="github-link">Ver en GitHub</a>
        </div>

        <div class="cards">
            <div class="card">
                <div class="card-icon">💻</div>
                <h3 class="card-title">Problemas Básicos</h3>
                <p class="card-text">Ejercicios fundamentales en C++ para fortalecer tus habilidades de programación.</p>
            </div>
            
            <div class="card">
                <div class="card-icon">🎓</div>
                <h3 class="card-title">Orientado a Cursos</h3>
                <p class="card-text">Contenido estructurado ideal para complementar tu aprendizaje académico.</p>
            </div>
            
            <div class="card">
                <div class="card-icon">🔧</div>
                <h3 class="card-title">Estructuras de Datos</h3>
                <p class="card-text">Implementaciones de listas, pilas, colas y árboles con ejemplos claros.</p>
            </div>
        </div>

        <div class="topics">
            <h2 class="section-title">📚 Temas Incluidos</h2>
            <div class="topics-grid">
                <div class="topic-item">
                    <div class="topic-icon">🔀</div>
                    <div class="topic-name">Condicionales</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">🔄</div>
                    <div class="topic-name">Switch</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">🔁</div>
                    <div class="topic-name">Bucles</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">🎯</div>
                    <div class="topic-name">Iteradores</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">📋</div>
                    <div class="topic-name">Listas</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">📚</div>
                    <div class="topic-name">Pilas</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">🏗️</div>
                    <div class="topic-name">Estructuras</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">🔄</div>
                    <div class="topic-name">Colas</div>
                </div>
                <div class="topic-item">
                    <div class="topic-icon">🌳</div>
                    <div class="topic-name">Árboles</div>
                </div>
            </div>
        </div>

        <div class="stats">
            <div class="stat">
                <div class="stat-number">9+</div>
                <div class="stat-label">Temas</div>
            </div>
            <div class="stat">
                <div class="stat-number">∞</div>
                <div class="stat-label">Posibilidades</div>
            </div>
            <div class="stat">
                <div class="stat-number">💡</div>
                <div class="stat-label">Aprendizaje</div>
            </div>
        </div>

        <div class="features">
            <h2 class="section-title">✨ Características</h2>
            <div class="features-grid">
                <div class="feature">
                    <div class="feature-icon">✅</div>
                    <div class="feature-text">Código comentado y explicado</div>
                </div>
                <div class="feature">
                    <div class="feature-icon">🎯</div>
                    <div class="feature-text">Ejercicios progresivos</div>
                </div>
                <div class="feature">
                    <div class="feature-icon">📖</div>
                    <div class="feature-text">Ejemplos prácticos</div>
                </div>
                <div class="feature">
                    <div class="feature-icon">🔄</div>
                    <div class="feature-text">Actualización constante</div>
                </div>
                <div class="feature">
                    <div class="feature-icon">🌟</div>
                    <div class="feature-text">Código limpio y optimizado</div>
                </div>
                <div class="feature">
                    <div class="feature-icon">🚀</div>
                    <div class="feature-text">Perfecto para principiantes</div>
                </div>
            </div>
        </div>
    </div>
</body>
</html>


## Authors


* [*Consuelo Alejandra Pinto Toro*](https://github.com/hatejandra)
