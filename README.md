# Malanguetas

En este repositorio, encontrarás un código capaz de organizar el stock de una pequeña empresa de malangas llamada Malanguetas. El propósito de este código es proporcionar a los usuarios una manera más práctica y rápida de administrar su inventario y obtener información relevante. Las principales características del código incluyen:

  - Archivos de texto (lectura y escritura)

  - Ordenamiento de valores: Se implementa un algoritmo de ordenación por inserción que organiza el inventario de Malanguetas de menor a mayor cantidad de sabores vendidos en la semana. Esto permite a los usuarios ver claramente cuáles son los sabores más populares.

  - Búsqueda binaria: El código ofrece la capacidad de buscar un sabor específico en el inventario utilizando el algoritmo de búsqueda binaria. Esto permite a los usuarios encontrar rápidamente información sobre un sabor particular y conocer la cantidad de unidades
    vendidas en la semana.

Estas funcionalidades proporcionan a los usuarios una herramienta eficaz para gestionar su inventario y tomar decisiones informadas sobre qué sabores son más populares y cuáles pueden necesitar una mayor atención en términos de suministro. Este código se puede ampliar y personalizar según las necesidades específicas de Malanguetas para una gestión de inventario más completa y eficiente.

Para usar correctamente este software, a la hora que se le solicite al usuario seleccionar una fecha, esta deberá ser en el rango de 28/09/2023 - 12/10/2023

Estructura de datos y Big O notation:

En el caso de mi proyecto, la estructura de datos implementada fue el hash map, el cual se encuentra en la linea 19 del archivo Contenido.cpp, la razón por la que decidí usar esta estrustura radica en que mi proyecto necesitaba de una lista capaz de recibir datos relacionados, ya que en un día (fecha) se puede vender varios sabores de malangas, antes de implementar la estructura estaba usanod un vector de pares, el cual funcionaba bien pero a la larga se volvía lento con medida en que iba agregando valores, por lo que decidí usar Hash Map. El big O notation que ocupa este O(1) promedio.
