
# Potenciómetro
- El potenciómetro nos proporciona una resistencia variable según vayamos modificando su posición
- si está totalmente cerrado obtendremos como salida el máximo voltaje(el de entrada), si lo tenemos totalmente abierto, obtendremos 0 voltios y si lo tenemos en una posición intermedia obtendremos una fracción del voltaje de entrada proporcional a la posicíon en la que se encuentre.
Este comportamiento se llama divisor de tensíon

## Tipos de potenciometros

- Existen varios tipos, pero los mas comunes son:
  * Variacion lineal: La resistencia es directamente proporcional al angulo de giro, es lineal
  * Variacion logarítmica: La resistencia depende logarítmicamente del angulo de giro

Normalmente tienen 3 conexiones:

* Fuente de alimentacíon
* Tierra [GND]
* Salida 
<br>
<br>
 
_Esquema de conexiones_
<p align="center">
<img src="https://github.com/JereC4str0/Learning-Arduino-ESP8266/blob/main/sensores/potenciometro/assets/image.png" height="300" width="600"</p>

<p align="center">
<img src="https://github.com/JereC4str0/Learning-Arduino-ESP8266/blob/main/sensores/potenciometro/assets/photo.jpg" height="300" width="600" >
</p>

<br>
<br>

## Métodos

### AnalogRead()

* Lee un valor de pin analógico
* Regresa un valor entero positivo entre 0 y 1023
* A0 Pin Analogico
``` int val = analogRead(A0) ```

### Serial 
- Se usa para la comunicacion serial entre la tarjeta y cualquier otro dispositivo
``` Serial.begin(speed) ```
   * Abre el puerto serie y coloca la taza de transferencia a speed bits por segundo (baud).
   
  ``` Serial.print("texo") ```
   * Imprime datos en el puerto serie como texto ASCII legible por humanos.


### Delay 
- Pausa el programa durante el tiempo(en milisegundos) especificado como parámetro

``` Delay(2000) //pausa de 2 segundos ```
   * Abre el puerto serie y coloca la taza de transferencia a speed bits por segundo (baud).
   [ ! ] No se recomienda usarlo, es mejor emplear millis

### map
- Vuelve a mapear un número de un rango a otro. Es decir, un valor de fromLow se asignaría a toLow, un valor de fromHigh a toHigh, valores intermedios a valores intermedios

``` map(value, fromLow,fromHigh,toLow,toHigh)```
   * Abre el puerto serie y coloca la taza de transferencia a speed bits por segundo (baud).
   
``` int res = map(value, 0,100) ```
  
