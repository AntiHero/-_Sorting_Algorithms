1. **Cортировка пузырьком**. Задача - последовательностью попарных перестановок добиться перестановки элементов исходного массива "на месте". Сложность **O(n^2)**.
1. **Cортировка выбором**. Задача - проходом по массиву осуществить поиск минимального элемента и переместить его в начало. Последующими проходами добиться полной сортировки массива. Сложность **O(n^2)**.
1. **Cортировка вставками**. Задача - просмотреть элементы массива по отдельности и каждый новый элемент разместить в подходящее место среди ранее упорядоченных элементов. Сложность **O(n^2)**.
1. **Cортировка подсчётом**. Задача - используя диапазон чисел сортируемого массива подсчитать количество совпадающих элементов, затем разложить их в массиве в нужном порядке. Сложность **O(n + M)**, где **M** - это мощность множества потенциальных значений ключа. Этот вид сортировки желательно применять с целыми положительными числами.