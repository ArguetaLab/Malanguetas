# Malanguetas

En este repositorio, encontrarás un código capaz de organizar el stock de una pequeña empresa de malangas llamada Malanguetas. El propósito de este código es proporcionar a los usuarios una manera más práctica y rápida de administrar su inventario y obtener información relevante. Las principales características del código incluyen:

  - Archivos de texto (lectura y escritura)

  - Ordenamiento de valores: Se implementa un algoritmo de ordenación por inserción que organiza el inventario de Malanguetas de menor a mayor cantidad de sabores vendidos en la semana. Esto permite a los usuarios ver claramente cuáles son los sabores más populares.

  - Búsqueda binaria: El código ofrece la capacidad de buscar un sabor específico en el inventario utilizando el algoritmo de búsqueda binaria. Esto permite a los usuarios encontrar rápidamente información sobre un sabor particular y conocer la cantidad de unidades
    vendidas en la semana.

Estas funcionalidades proporcionan a los usuarios una herramienta eficaz para gestionar su inventario y tomar decisiones informadas sobre qué sabores son más populares y cuáles pueden necesitar una mayor atención en términos de suministro. Este código se puede ampliar y personalizar según las necesidades específicas de Malanguetas para una gestión de inventario más completa y eficiente.

Para usar correctamente este software, a la hora que se le solicite al usuario seleccionar una fecha, esta deberá ser en el rango de 28/09/2023 - 16/10/2023

Estructura de datos y Big O notation:

- agregarSabor: O(1)

- buscarSabor: O(n)

- ordenarSaboresPorCantidad: O(n^2)

# "SICT0301 Evalúa los componentes"

  # Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.

  Para el ordenamiento de los sabores del inventario de Malanguetas opté por usar un método de inserción, como se mencionó anteriormente este método va a ordenar de menor a mayor los sabores. Para el análisis de complejidad se encontró que este era de tipo O(n^2)

  # Hace un análisis de complejidad correcto y completo todas las estructuras de datos y cada uno de sus usos en el programa

  # Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa

# "SICT0302 Toma decisiones "

  # Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.


  # Selecciona una estructura de datos adecuada al problema y lo usa correctamente.


# "SICT0303 Implementa acciones científicas"

  # Implementa mecanismos para consultar información de las estructras correctos

  El programa es capaz de recibir consultas del usuario tales como:
    - Pedir mostrar todos los sabores disponibles de menor a mayor (Esto de una fecha en especifico)
    - Buscar un sabor de una fecha en especifico
    - Agregar una nueva fecha con las cantidades de malangas vendidas por sabor

  # Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta

    

  # Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta








