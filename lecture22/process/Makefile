all: producer consumer process1 process2 npProducer npConsumer

producer: producer.cpp
	g++ producer.cpp -o producer

consumer: consumer.cpp
	g++ consumer.cpp -o consumer

npProducer: npProducer.cpp
	g++ npProducer.cpp -o npProducer

npConsumer: npConsumer.cpp
	g++ npConsumer.cpp -o npConsumer	

process1: process1.cpp
	g++ process1.cpp -o process1

process2: process2.cpp
	g++ process2.cpp -o process2

clean:
	rm -f producer consumer process1 process2 npProducer npConsumer myNamedPipe