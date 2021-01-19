//This project implements a WSN network consisting of 50 sensor nodes, 10 cluster heads and a base station/sink
//This project is based on the leach protocol, but does not exactly implement leach
//It takes the theories of leach protocol like the energy saving, cluster topology, and using tdma to schedule transmissions
//The election of cluster head is done beforehand
//The topology is such that there are 5 sensor nodes per cluster head
//There exists 10 cluster heads each with 5 sensor noses
//The cluster heads are all connected to a single base station
//The cluster heads collect the data sent from the sensor nodes and transmit it to the base station
//All the modules except the base station have their transmissions switched off until it is their turn to transmit hence saving energy