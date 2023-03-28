//cargar comandos
La función "cargar_elementos" carga en memoria los datos de puntos de interés o elementos contenidos en el archivo identificado por [nombre_archivo]. Si dentro de la misma sesión de trabajo ya se han cargado otros archivos de puntos de interés, la información se sobreescribirá en memoria.
Uso:
cargar_elementos [nombre_archivo]
Parámetros:
[nombre_archivo]: nombre del archivo que contiene la información de los elementos a cargar en memoria DEBE SER UN .txt.
Salida en pantalla:
- Si el archivo está vacío: [nombre_archivo] no contiene elementos.
- Si no se puede abrir el archivo: [nombre_archivo] no se encuentra o no puede leerse.
- Si los comandos se cargan correctamente: n elementos cargados correctamente desde [nombre_archivo].
Ejemplo de uso:
cargar_elementos elementos.txt
//cargar elementos
//agregar movimiento
Descripción:
La función "agregar_movimiento" agrega un comando de movimiento a la lista de comandos del robot "Curiosity". El movimiento puede ser de dos tipos: "avanzar" o "girar". La magnitud corresponde al valor del movimiento; si es avanzar, el número de unidades que se espera avanzar, si es girar la cantidad de grados que debe girar. La unidad de medida corresponde a la convención con la que se mide la magnitud del movimiento (centímetros, metros, grados, ...). Si no se envía la información completa y adecuada del comando de movimiento, éste no puede agregarse a la lista de los comandos que se enviarán al robot desde la tierra.
Uso:
    - agregar_movimiento tipo_mov magnitud unidad_med

Parámetros:

tipo_mov: tipo de movimiento, puede ser "avanzar" o "girar".
magnitud: magnitud del movimiento, un número entero o decimal.
unidad_med: unidad de medida de la magnitud, una cadena de caracteres.
Salida en pantalla:

(Formato erróneo) La información del movimiento no corresponde a los datos esperados (tipo, magnitud, unidad).
(Resultado exitoso) El comando de movimiento ha sido agregado exitosamente.
Ejemplos de uso:

Para agregar un movimiento de avanzar 10 metros:
agregar_movimiento avanzar 10 metros

Para agregar un movimiento de girar 90 grados:
agregar_movimiento girar 90 grados
//agregar analisas
Descripción:
Agrega el comando de análisis descrito a la lista de comandos del robot “Curiosity”. El análisis puede ser de tres tipos: fotografiar, composicion o perforar. El objeto es el nombre del elemento que se quiere analizar (roca, arena, monticulo, ...). El comentario es opcional y permite agregar más información sobre el elemento o el análisis, este comentario estará encerrado entre comillas simples (ejemplo: ’roca_cuadrante_32’).

Uso:
agregar_analisis tipo_analisis objeto comentario

Parámetros:

tipo_analisis: tipo de análisis que se quiere realizar. Puede ser 'fotografiar', 'composicion' o 'perforar'.
objeto: nombre del elemento que se quiere analizar (roca, arena, montículo, etc.).
comentario (opcional): información adicional sobre el elemento o el análisis. Se debe encerrar entre comillas simples.
Salida en pantalla:

(Formato erróneo) La información del análisis no corresponde a los datos esperados (tipo, objeto, comentario).
(Resultado exitoso) El comando de análisis ha sido agregado exitosamente.
Ejemplos de uso:

agregar_analisis fotografiar roca_cuadrante_32 "Analizar la textura de la roca"
agregar_analisis perforar monticulo "Tomar muestras para análisis químico"
agregar_analisis composicion arena "Realizar análisis de elementos en la arena"
//agregar elementos
Descripción:
La función "agregar_elemento" agrega el componente o elemento descrito a la lista de puntos de interés del robot “Curiosity”. El tipo de componente puede ser uno entre roca, crater, monticulo o duna. El tamaño es un valor real que da cuenta de qué tan grande es el elemento; y la unidad de medida complementa este valor con la convención que se usó para su medición (centimetros, metros, ...). Finalmente, las coordenadas x y y corresponden a números reales que permiten conocer la ubicación del elemento en el sistema de coordenadas del suelo marciano utilizado por el vehículo.

Uso:
agregar_elemento tipo_comp tamaño unidad_med coordX coordY

Parámetros:

tipo_comp: tipo de componente (roca, crater, monticulo o duna)
tamaño: tamaño del elemento (valor real)
unidad_med: unidad de medida del tamaño (centímetros, metros, ...)
coordX: coordenada X del elemento (valor real)
coordY: coordenada Y del elemento (valor real)
Salida en pantalla:

(Formato erróneo) La información del elemento no corresponde a los datos esperados (tipo, tamaño, unidad, x, y).
(Resultado exitoso) El elemento ha sido agregado exitosamente.
Ejemplos de uso:

agregar_elemento roca 12.5 metros 23.4 45.6
agregar_elemento crater 8.2 centimetros -12.3 6.7
agregar_elemento monticulo 5.0 metros 0.0 0.0
//guardar
Guarda en un archivo de texto (.txt) la información solicitada de acuerdo al tipo de archivo. Los tipos de archivo disponibles son: comandos, que almacena la información de comandos de movimiento y de análisis que debe ejecutar el robot; y elementos, que almacena la información de los componentes o puntos de interés conocidos en el suelo marciano.
Uso:
guardar tipo_archivo nombre_archivo
Parámetros:
tipo_archivo: tipo de archivo a guardar (comandos o elementos).
nombre_archivo: nombre del archivo en el que se guardará la información. Debe tener la extensión .txt.
Salida en pantalla:
- Si no hay información: La información requerida no está almacenada en memoria.
- Si la escritura es exitosa: La información ha sido guardada en nombre_archivo.
- Si hay problemas al guardar el archivo: Error guardando en nombre_archivo.
Ejemplo de uso:
guardar comandos comandos.txt
//simular
Permite simular el resultado de los comandos de movimiento que se enviarán al robot "Curiosity" desde la Tierra, facilitando así la validación de la nueva posición en la que podría ubicarse. Para ejecutarse adecuadamente, requiere conocer la posición actual (coordenadas X y Y) del vehículo. Hay que tener en cuenta que sólo los comandos de movimiento son necesarios, no los de análisis.
Uso:
simular_comandos coordX coordY
Parámetros:
coordX: coordenada X actual del vehículo.
coordY: coordenada Y actual del vehículo.
Salida en pantalla:
- Si no se tiene la información necesaria: La información requerida no está almacenada en memoria.
- Si la simulación es exitosa: La simulación de los comandos, a partir de la posición (coordX,coordY), deja al robot en la nueva posición (nuevoX,nuevoY).
Ejemplo de uso:
simular_comandos 10 5
//saliir