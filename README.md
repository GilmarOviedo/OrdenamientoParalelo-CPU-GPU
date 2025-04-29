# OrdenamientoParalelo-CPU-GPU


Ordenamiento_Paralelo_Proyecto/
├── README.md                  # Explicación general del proyecto
├── data/
│   ├── inputs/                 # Datos de entrada para pruebas (arrays grandes, etc.)
│   └── results/                # Resultados de ejecución (logs, CSVs de tiempos)
├── docs/
│   ├── informe/                # Informe del proyecto (archivos fuente .docx o .tex)
│   └── presentacion/           # Archivos de la presentación (PPT, imágenes, PDF)
├── src/
│   ├── secuencial/             # Código fuente secuencial (MergeSort y QuickSort)
│   │   ├── mergesort.cpp
│   │   ├── quicksort.cpp
│   │   └── main_secuencial.cpp  # Main para pruebas secuenciales
│   ├── openmp/                 # Código fuente paralelo usando OpenMP
│   │   ├── mergesort_openmp.cpp
│   │   ├── quicksort_openmp.cpp
│   │   └── main_openmp.cpp
│   ├── cuda/                   # Código fuente paralelo usando CUDA
│   │   ├── mergesort_cuda.cu
│   │   ├── quicksort_cuda.cu
│   │   └── main_cuda.cu
│   └── utils/                  # Utilidades comunes (generación de arrays, validaciones)
│       ├── array_generator.cpp
│       ├── timer.cpp
│       └── validation.cpp
├── scripts/
│   ├── compilar_secuencial.sh   # Script para compilar código secuencial
│   ├── compilar_openmp.sh       # Script para compilar código OpenMP
│   └── compilar_cuda.sh         # Script para compilar código CUDA
├── resultados.ipynb             # Notebook Jupyter para análisis y gráficos
└── Makefile                     # Opcional: Makefile para automatizar compilaciones
