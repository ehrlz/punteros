# PUNTEROS

## Contenido

- [Introducción](#Introducción)
- [Ejemplo](#Ejemplo)
- [Representación](#Representación)

<br/>

## Introducción  
Este repositorio intenta explicar el funcionamiento de los punteros en C para aquellos que no estén familiarizados con el concepto.

Un puntero es una **dirección de memoria** (imaginémoslo como una caja) en la que se **guarda una dirección**.

¿Qué es una dirección?  
Una dirección de memoria es la "posición" de memoria principal donde se almacena un valor.


| Dirección | Valor |
|---|---|
| 14000 | Basura |

*Representación de una posición de memoria*

<br/>

## Ejemplo
Con este código de ejemplo vamos a intentar entender la base.  


Código:  
```c
int a = 14;
int *p = &a;

printf("Dir del puntero: %i\n", &p);
printf("Dir a la que apunta: %i\n", p);
printf("Contenido de lo que apunta: %i\n", *p);
printf("Dir de a: %i\n", &a);
printf("a: %i\n", a);
```

Volcado:
```
Dir del puntero: 1574959824
Dir a la que apunta: 1574959836
Contenido de lo que apunta: 14
Dir de a: 1574959836
a: 14
``` 

`int a` es la declaración de una variable de tipo int (una variable que ocupa 2 bytes y puede almacenar enteros en [−32,767, +32,767]) *(véase [Tipos de datos en C](https://en.wikipedia.org/wiki/C_data_types))*  
*(declarar es reservar en pila una cantidad de memoria igual al tamaño del tipo. A partir de ahora esa cantidad de memoria es lo que se modifica con lo que llamamos **variable**)*

`int *p` es la declaración de un **puntero a entero**, es decir, una variable donde se almacena la dirección de un entero (es decir, 2 bytes)

`&a` es la forma que tiene C para expresar **dirección de memoria donde está la variable `a`**

`*p` es la forma de acceder al contenido de la dirección que contiene el puntero.

Entonces, con todo esto, si nos fijamos en el código de ejemplo, podemos ver `int *p = &a;`, es decir, la declaración del puntero a entero p y su asignación a la posición de memoria de la variable `a`.  

Por lo tanto, podemos ver que:  
- `&p` es la dirección del puntero
- `&a` es la dirección de la variable
- `p` es el contenido del puntero, es decir, la dirección de `a`
- `a` es el contenido de la variable, es decir, `14`
- `*p` es el contenido de la dirección de memoria que es contenido del puntero, es decir, el contenido de `a`, es decir, `14`.

*(las direcciones de memoria cambian normalmente a cada ejecución del programa)*

<br/>

## Representación
Se podría representar así la situación en memoria:  
En la dirección 14020 se encuentra el **puntero**.  
En la dirección 14050 se encuentra la **variable**.

| Dirección | Valor |
|---|---|
| 14000 | Basura |
| ... | ... |
| 14020 | 14050 |
| ... | ... |
| 14050 | 14 |
| 14052 | Basura |
| ... | ... |

*Representación parcial de la memoria principal*