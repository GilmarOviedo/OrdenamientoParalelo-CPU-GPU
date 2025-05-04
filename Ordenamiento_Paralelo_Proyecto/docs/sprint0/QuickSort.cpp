#include <iostream>
#include <vector>

// Función para dividir el arreglo usando el último elemento como pivote
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Pivote
    int i = (low - 1); // Índice del menor elemento

    for (int j = low; j < high; j++) {
        // Si el elemento actual es menor o igual al pivote
        if (arr[j] <= pivot) {
            i++; // Incrementar índice del menor elemento
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Función principal de QuickSort
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Particionar el arreglo
        int pi = partition(arr, low, high);

        // Ordenar recursivamente las sublistas
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<int> arr = {4, 3, 1, 2, 5, 9, 7, 10, 6};
    quickSort(arr, 0, arr.size() - 1);

    std::cout << "Arreglo ordenado:\n";
    for (int num : arr)
        std::cout << num << " ";
    return 0;
}
