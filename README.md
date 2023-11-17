# ESP01-MQTT

1era Etapa:

Primeramente investigamos sobre el funcionamiento del esp01.
Probamos varias configuraciones para conectarlo hasta que encontramos una que funcionaba y nos permitía cambiar de modo cargar código al de ejecución.

Sin embargo, a la hora de cargar los diferentes códigos teníamos errores que no sabíamos de qué eran. Tras una ardua investigación encontramos que 
dichos errores bien podían ser por la versión de las librerías como por problemas de alimentación. Al no obtener ningún resultado cambiando la versión de la
librería del ESP-01 que estabamos utilizando optamos por alimentarlo con una fuente de alimentación que pudiera entregar el amperaje necesario en vez de por una batería 
que posiblemente estaba descargada. 


2da Etapa:

Una vez que nos pudimos abstraer de la etapa de conexión, pudimos levantar una página web mediante el protocolo HTTP. Sin embargo nuestro objetivo era transmitir mediante
el protocolo MQTT hacia un broker. Una vez se levantó el broker MQTT hicimos nuestra primera transmisión desde el ESP-01 a un tópico x mediante el uso de las librerías PubSubClient.h y ESP8266Wifi.


3era Etapa:

En esta última etapa hicimos diferentes pruebas para poder transmitir datos desde un arduino el ESP-01 y dichos datos transmitirlos por MQTT al broker. La conexión entre el ESP-01
y el arduino se harían mediante protocolo Serial. Sin embargo nos encontramos con diferentes problemas en la conexión entre el arduino y el ESP-01.
