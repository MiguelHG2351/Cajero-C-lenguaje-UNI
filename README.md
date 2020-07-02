# Este cajero esta diseñado en C

Se ejecuta en un compilador con turbo C

# Dependencias requeridas
cua
### 1. graphics.h

# Ficheros

Los ficheros sirven para guardar los datos:
Estan: 

## Claro.txt

## Movistar.txt

## riales.txt

## users.txt

## pass.txt

## agua (Guarda cuanto ha pagado de agua, cuando se paga el fichero se vuelve cero,  si añade un núemro, lo que hace es que al pagar se cobra ese número )

## Luz (Paga cuanto debe de agua, cuando se paga el fichero se vuelve cero si añade un núemro, lo que hace es que al pagar se cobra ese número )

# Adelanto

No esta guardado en ficheros por motivo de warings

# Transferir

Eliges un usuario y agregas la cantidad a ingresar

# Cambiar PIN

solo adminte 4 dígitos

# Claro y Tigo

Eliges la cantidad de la recargar, no pide número por que no estoy validando si es claro o tigo haci que no lo vi necesario, ademas que en un futuro no creo que sea necesario dar un número para realizar una recarga
No dice Tigo en el archivo por que me daba error de nombre

# Salir

Cuando da a salir empieza a guardar datos en ficheros

# Líneas de códigos

## Index.h Línea 4 tiene el control del login

## Línea 36 esta la base de datos local

## Línea 405 SaveUsers Si en el index.h eligio registrarse se va a ejecutar

## Línea 202 Valida el inicio de sesión

## Línea 431 getData Ejecuta las funciones para traer datos de ficheros

## Línea 405 trae o actualiza datos de ficheros para usuario

## Línea 383 trae o actualiza datos de ficheros para contraseña

## Línea 358 trae o actualiza datos de ficheros para Dinero

## Línea 334 trae o actualiza datos de ficheros para Agua

## Línea 311 trae o actualiza datos de ficheros para Luz

## Línea 288 trae o actualiza datos de ficheros para recargas claro

## Línea 265 trae o actualiza datos de ficheros para recargas Movistar

## Línea 140 Interfaz de incio, una vez inicio la sesión

## Línea 53 Pagos de la cuenta de usuario