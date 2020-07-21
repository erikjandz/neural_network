#pragma once
#include "string"


//a neural network to detect a number between 0 and 9 from a small picture
class neural_network {
public:
	//initialise the neural network
	neural_network(){}

	//write all weights and biases to files
	void write_to_file(){}

	//read all data from the files
	void read_from_file() {}

	//process an image and return the value you get
	unsigned int process_image(sf::Image image){}

	//train the network with data
	void train_network(){}

private:
	std::vector<std::vector<double>> first_layer_weights;
	std::vector<std::vector<double>> second_layer_weights;
	std::vector<std::vector<double>> third_layer_weights;

	std::vector<double> first_layer_bias;
	std::vector<double> second_layer_bias;
	std::vector<double> third_layer_bias;
};