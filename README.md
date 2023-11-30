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

  El método cargarDatosDesdeTXT funciona al procesar un archivo CSV que contiene información sobre ventas de diferentes sabores en diversas fechas. La complejidad de tiempo proviene de dos bucles: el primero recorre las lineas del archivo (n), y el segundo, dentro de este, analiza los sabores de cada línea (m). Dentro del bucle interno, se utiliza un hash map para almacenar la cantidad de cada sabor en una fecha específica. La complejidad de espacio O(n*m).

  # Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa

Para el archivo del main su complejidad total fue de: O(1) ya que:

  - El bucle se ejecuta mientras el usuario desee continuar.
  - No se utiliza espacio adicional significativo en el bucle.
  - Las operaciones de entrada/salida (cin, cout) son de tiempo constante.

Para el archivo Contenido.cpp su complejidad total fue O(n*m):

La complejidad total del programa se verá dominada por las operaciones de carga y procesamiento de datos en el método cargarDatosDesdeTXT de la clase Contenido, ya que es la operación más costosa en términos de tiempo y espacio. Por lo tanto, la complejidad final sería aproximadamente O(n⋅m), donde n es la cantidad total de líneas en el archivo y m es el número de sabores en cada línea. Las demás operaciones son de complejidad constante y no afectarán significativamente la complejidad total del programa.
  

# "SICT0302 Toma decisiones "

  # Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.

  Como ya se ha mencionado anteriormente, el método que se optó fue el de inserción, esto ya que no contamos con tantos datos como para usar un método merge. Se puede encontrar este ordenamiento en la función "ordenarSaboresPorCantidad()" 


  # Selecciona una estructura de datos adecuada al problema y lo usa correctamente.

  Para la estructura de datos se decidió ocupar los Hash Maps, los cuales son: Un mapeo de clave-valor, lo que significa que cada clave se asigna exactamente a un valor y que podemos usar la clave para recuperar el valor correspondiente de un HashMap. Más adelante se    explicará a profundidad el cómo se aplica esta estructura a nuestro código y de qué forma está relacionado con la lectura y escritura de nuestro archivo TXT.

  


# "SICT0303 Implementa acciones científicas"

  # Implementa mecanismos para consultar información de las estructras correctos

  El programa es capaz de recibir consultas del usuario tales como:
    - Pedir mostrar todos los sabores disponibles de menor a mayor (Esto de una fecha en especifico)
    - Buscar un sabor de una fecha en especifico
    - Agregar una nueva fecha con las cantidades de malangas vendidas por sabor

  # Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta

  En el archivo "Contenido.cpp" está un método llamado "cargarDatosDesdeTXT()" como lo dice su nombre lo que se realiza aquí es leer linea por linea del txt e irlo metiendo a la estructura de datos escogida, que en este caso fueron los Hash   Maps.

  Un ejemplo de cómo aparecen los datos en el txt sería de la siguiente forma:

  06/10/2023,14,8,2,8,32,34,44

  La razón por la que se escogió esta estructura de datos fue porque necesitabamos relacionarlos con una clave y un valor,   esto con el objetivo de mantenerlos relacionados y no se revolvieran. Aparte que esta estructura es más rápida que hacer   un vector dentro de otro.

  # Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta

  La forma en la que se escogió el cómo implementar este rugro fue permitiendole al usuario agregar una nueva fecha con la   cantidad de malangas en el día.

  Para esto opté por realizar un método llamado "nuevaFecha()" el cual abre el archivo txt de la base de datos y lo     modifica añadiendo una nueva linea con el mismo formato que las anteriores. Posteriormente vuelve a llamar a la función   "cargarDatosDesdeTXT()" de   esta forma podemos escribir en archivos y guardarlos en la estructura.








