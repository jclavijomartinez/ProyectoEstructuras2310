//cargar comandos
cout<<"Descripción:"<<endl;
cout<<"Carga en memoria los comandos de desplazamiento contenidos en el archivo identificado por nombre_archivo, sobrescribiendo cualquier información previamente cargada en memoria"<<endl;
cout<<"Uso"<<endl;
cout<<"    - cargar_comandos [nombre_archivo]"<<endl;
cout<<"Parámetros"<<endl;
cout<<"    - [nombre_archivo]: el nombre o ruta del archivo que contiene los comandos de desplazamiento"<<endl;
cout<<"Salida en pantalla"<<endl;
cout<<"    - Si el archivo está vacío: [nombre_archivo] no contiene elementos"<<endl;
cout<<"    - Si no se puede abrir el archivo: [nombre_archivo] no se encuentra o no puede leerse"<<endl;
cout<<"    - Si se puede abrir el archivo exitosamente y cargar los comandos: n comandos cargados correctamente desde [nombre_archivo]"<<endl;
cout<<"Ejemplos de uso"<<endl;
cout<<"    - cargar_comandos comandos.txt"<<endl;
cout<<"    - cargar_comandos C:/Documentos/comandos.txt"<<endl;
//cargar elementos
cout<<"Descripción:"<<endl;
cout<<"La función cargar_elementos carga en memoria los datos de puntos de interés o elementos contenidos en el archivo identificado por [nombre_archivo]. "<<endl;
cout<<"Si dentro de la misma sesión de trabajo ya se han cargado otros archivos de puntos de interés, la información se sobreescribirá en memoria."<<endl;
cout<<"Uso:"<<endl;
cout<<"    cargar_elementos [nombre_archivo]"<<endl;
cout<<"Parámetros:"<<endl;
cout<<"    [nombre_archivo]: nombre del archivo que contiene la información de los elementos a cargar en memoria (puede ser un .txt o .csv)"<<endl;
cout<<"Salida en pantalla:"<<endl;
cout<<"    - Si el archivo está vacío: [nombre_archivo] no contiene elementos."<<endl;
cout<<"    - Si no se puede abrir el archivo: [nombre_archivo] no se encuentra o no puede leerse."<<endl;
cout<<"    - Si los comandos se cargan correctamente: n elementos cargados correctamente desde [nombre_archivo]."<<endl;
cout<<"Ejemplo de uso:"<<endl;
cout<<"    - cargar_elementos elementos.txt"<<endl;
//agregar movimiento
cout<<"Descripción:"<<endl;
cout<<"La función  agregar_movimiento  agrega un comando de movimiento a la lista de comandos del robot  Curiosity."<<endl;
cout<<"El movimiento puede ser de dos tipos:  avanzar  o  girar. "<<endl;
cout<<"La magnitud corresponde al valor del movimiento; si es avanzar, el número de unidades que se espera avanzar, si es girar la cantidad de grados que debe girar. "<<endl;
cout<<"La unidad de medida corresponde a la convención con la que se mide la magnitud del movimiento (centímetros, metros, grados...). "<<endl;
cout<<"Si no se envía la información completa y adecuada del comando de movimiento, éste no puede agregarse a la lista de los comandos que se enviarán al robot desde la tierra."<<endl;
cout<<"Uso:"<<endl;
cout<<"    - agregar_movimiento tipo_mov magnitud unidad_med"<<endl;
cout<<"Parámetros:"<<endl;
cout<<"    - tipo_mov: tipo de movimiento, puede ser avanzar o girar."<<endl;
cout<<"    - magnitud: magnitud del movimiento, un número entero o decimal."<<endl;
cout<<"    - unidad_med: unidad de medida de la magnitud, una cadena de caracteres."<<endl;
cout<<"Salida en pantalla:"<<endl;
cout<<"    - Si hay un formato erróneo: La información del movimiento no corresponde a los datos esperados (tipo, magnitud, unidad)."<<endl;
cout<<"    - Si se agrega el comando de movimiento exitosamente: El comando de movimiento ha sido agregado exitosamente."<<endl;
cout<<"Ejemplos de uso:"<<endl;
cout<<"    - Para agregar un movimiento de avanzar 10 metros:"<<endl;
cout<<"        * agregar_movimiento avanzar 10 metros"<<endl;
cout<<"    - Para agregar un movimiento de girar 90 grados:"<<endl;
cout<<"        * agregar_movimiento girar 90 grados"<<endl;
//agregar analisas
cout<<"Descripción:"<<endl;
cout<<"Agrega el comando de análisis descrito a la lista de comandos del robot “Curiosity”. "<<endl;
cout<<"El análisis puede ser de tres tipos: fotografiar, composicion o perforar. "<<endl;
cout<<"El objeto es el nombre del elemento que se quiere analizar (roca, arena, monticulo, ...). "<<endl;
cout<<"El comentario es opcional y permite agregar más información sobre el elemento o el análisis, este comentario estará encerrado entre comillas simples (ejemplo: 'roca_cuadrante_32')."<<endl;
cout<<"Uso:"<<endl;
cout<<"    - agregar_analisis tipo_analisis objeto comentario"<<endl;
cout<<"Parámetros:"<<endl;
cout<<"    - tipo_analisis: tipo de análisis que se quiere realizar. Puede ser  fotografiar, composicion o perforar."<<endl;
cout<<"    - objeto: nombre del elemento que se quiere analizar (roca, arena, montículo, etc.)."<<endl;
cout<<"    - comentario (opcional): información adicional sobre el elemento o el análisis. Se debe encerrar entre comillas simples."<<endl;
cout<<"Salida en pantalla:"<<endl;
cout<<"    - Si el formato es erróneo: La información del análisis no corresponde a los datos esperados (tipo, objeto, comentario)."<<endl;
cout<<"    - Si se agrega el comando de análisis exitosamente: El comando de análisis ha sido agregado exitosamente."<<endl;
cout<<"Ejemplos de uso:"<<endl;
cout<<"    - agregar_analisis fotografiar roca_cuadrante_32  Analizar la textura de la roca "<<endl;
cout<<"    - agregar_analisis perforar monticulo  Tomar muestras para análisis químico "<<endl;
cout<<"    - agregar_analisis composicion arena  Realizar análisis de elementos en la arena "<<endl;
//agregar elementos
cout<<"Descripción:"<<endl;
cout<<"La función  agregar_elemento  agrega el componente o elemento descrito a la lista de puntos de interés del robot Curiosity. "<<endl;
cout<<"El tipo de componente puede ser uno entre roca, crater, monticulo o duna. "<<endl;
cout<<"El tamaño es un valor real que da cuenta de qué tan grande es el elemento; y la unidad de medida complementa este valor con la convención que se usó para su medición (centimetros, metros...). "<<endl;
cout<<"Finalmente, las coordenadas x y y corresponden a números reales que permiten conocer la ubicación del elemento en el sistema de coordenadas del suelo marciano utilizado por el vehículo."<<endl;
cout<<"Uso:"<<endl;
cout<<" - agregar_elemento tipo_comp tamaño unidad_med coordX coordY"<<endl;
cout<<"Parámetros:"<<endl;
cout<<"    - tipo_comp: tipo de componente (roca, crater, monticulo o duna)"<<endl;
cout<<"    - tamaño: tamaño del elemento (valor real)"<<endl;
cout<<"    - unidad_med: unidad de medida del tamaño (centímetros, metros, ...)"<<endl;
cout<<"    - coordX: coordenada X del elemento (valor real)"<<endl;
cout<<"    - coordY: coordenada Y del elemento (valor real)"<<endl;
cout<<"Salida en pantalla:"<<endl;
cout<<"    - Si hay un formato erróneo: La información del elemento no corresponde a los datos esperados (tipo, tamaño, unidad, x, y)."<<endl;
cout<<"    - Si se agrega el elemento exitosamente: El elemento ha sido agregado exitosamente."<<endl;
cout<<"Ejemplos de uso:"<<endl;
cout<<"    - agregar_elemento roca 12.5 metros 23.4 45.6"<<endl;
cout<<"    - agregar_elemento crater 8.2 centimetros -12.3 6.7"<<endl;
cout<<"    - agregar_elemento monticulo 5.0 metros 0.0 0.0"<<endl;
//guardar
cout<<"Descripción:"<<endl;
cout<<"Guarda en un archivo de texto (.txt) la información solicitada de acuerdo al tipo de archivo. "<<endl;
cout<<"Los tipos de archivo disponibles son: comandos, que almacena la información de comandos de movimiento y de análisis que debe ejecutar el robot"<<endl;
cout<<"y elementos, que almacena la información de los componentes o puntos de interés conocidos en el suelo marciano."<<endl;
cout<<"Uso:"<<endl;
cout<<"    - guardar tipo_archivo nombre_archivo"<<endl;
cout<<"Parámetros:"<<endl;
cout<<"    - tipo_archivo: tipo de archivo a guardar (comandos o elementos)."<<endl;
cout<<"    - nombre_archivo: nombre del archivo en el que se guardará la información. Debe tener la extensión .txt."<<endl;
cout<<"Salida en pantalla:"<<endl;
cout<<"- Si no hay información: La información requerida no está almacenada en memoria."<<endl;
cout<<"- Si la escritura es exitosa: La información ha sido guardada en nombre_archivo."<<endl;
cout<<"- Si hay problemas al guardar el archivo: Error guardando en nombre_archivo."<<endl;
cout<<"Ejemplo de uso:"<<endl;
cout<<"    guardar comandos comandos.txt"<<endl;
//simular
cout<<"Descripción:"<<endl;
cout<<"Permite simular el resultado de los comandos de movimiento que se enviarán al robot  Curiosity  desde la Tierra, facilitando así la validación de la nueva posición en la que podría ubicarse. "<<endl;
cout<<"Para ejecutarse adecuadamente, requiere conocer la posición actual (coordenadas X y Y) del vehículo. "<<endl;
cout<<"Hay que tener en cuenta que sólo los comandos de movimiento son necesarios, no los de análisis."<<endl;
cout<<"Uso:"<<endl;
cout<<"    simular_comandos coordX coordY"<<endl;
cout<<"Parámetros:"<<endl;
cout<<"    - coordX: coordenada X actual del vehículo."<<endl;
cout<<"    - coordY: coordenada Y actual del vehículo."<<endl;
cout<<"Salida en pantalla:"<<endl;
cout<<"    - Si no se tiene la información necesaria: La información requerida no está almacenada en memoria."<<endl;
cout<<"    - Si la simulación es exitosa: La simulación de los comandos, a partir de la posición (coordX,coordY), deja al robot en la nueva posición (nuevoX,nuevoY)."<<endl;
cout<<"Ejemplo de uso:"<<endl;
cout<<"    simular_comandos 10 5"<<endl;