/*
Queremos generar un diccionario inverso. Estos diccionarios se caracterizan por
presentar las palabras en orden alfabético ascendente pero observando las palabras
desde su último carácter hasta el primero (por ejemplo: hola -> aloh). En la tabla
siguiente podemos ver un ejemplo de este tipo de ordenación:
                DICCIONARIO NORMAL              DICCIONARIO INVERSO
                adiós                                             hola
                camión                                          rosa
                geranio                                          camión
                hola                                               geranio
                rosa                                                tractor
                tractor                                            adiós

Una aplicación de este curioso diccionario es buscar palabras que rimen. Para
escribir un programa que genere un diccionario de este tipo, se pide:

    1. Escribir la función Comparar cuyo prototipo es el siguiente:
            int comparar(char *cad1, char *cad2),.
    Esta función comparará cadena1 y cadena2, pero observando las palabras
    desde su último carácter hasta el primero. La función devolverá los siguientes
    resultados:
        > 0 Si cadena1 está alfabéticamente después que cadena2.
        0     Si cadenal y cadena2 son iguales.
        < 0  Si cadena1 está alfabéticamente antes que cadena2.

    2. Escribir la función OrdenarCadenas con el prototipo que se indica a continuación, que ordene las palabras del array palabras en orden alfabético ascendente:
        void OrdenarCadenas(char **pcad, int fifas);
    El parámetro filas indica el número total de palabras que tiene el array pcad.Para ordenar las palabras se empleará el método de inserción.

    3. Escribir un programa que lea palabras de la entrada estándar y las almacene en un aray dinámico de cadenas de caracteres, y ffas ordenarlas utilizando las funciones anteriores, las visualice en la salida estándar. Para ello escriba. además de las funciones anteriores, las siguientes funciones:
            unsigmed int Leercadenas(char **pcad, unsigned nFifas);
            void VisuafizarCadenas (char **pcad, unsigned filas) ;

*/