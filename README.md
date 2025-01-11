# Sparschwein-Projekt
Ein Sparschwein, mit 2 Arduinos, einem LCD und 8 Sensoren für jede Münze.

An Pin 1-8 kommen die Sensoren, von den Zahlenwerten her geordnet, heißt, erst 1 cent, dann 2 cent, dann ...
An die Pins 12, 11, 10, 5, 4, 3 und 2, kommt das LCD, wie gewohnt verbunden.

Der eine Arduino, der die Sensoren verbunden hat, muss von TX auf dem anderen Arduino, mit dem LCD an RX verbunden werden und genau so andersrum.

Zuletzt kommt der Slave code in den Arduino mit den Sensoren und der Master Code in dem, der mit dem LCD verbunden ist.
