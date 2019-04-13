#include<iostream>

using namespace std;

class Carro{
	private:
	string color;
	float motor;
	string tamano;
	string placas;
	public:
		Carro(){
			
		}
		Carro(string color){
			this->color = color;
		}
	// SET Y GET
	string getColor(){
		return color;
	}
	void setColor(string color){
		this->color = color;
	}
	float getMotor(){
		return motor;
	}
	void setMotor (float motor){
		this->motor = motor;
	}
	string getTamano(){
		return tamano;
	}
	void setTamano (string tamano){
		this->tamano = tamano;
	}
	string getPlacas(){
		return placas;
	}
	void setPlacas (string placas){
		this->placas = placas;
	}
	bool prender(bool gasolina){
		if (gasolina){
			return true;
		}
		return false;
	}
	void frenar(){
		cout<<"Frenando..."<<endl;
	}
};

int main(){
int edad = 5;
Carro* objCarro = new Carro("rojo");
cout<<"Color del carro: "<<objCarro->getColor()<<endl;
/*objCarro.setColor("rojo");
cout<<"Color del carro: "<<objCarro.getColor()<<endl;	
	objCarro.setMotor(13.56);
	cout<<"Caballos de fuerza: "<<objCarro.getMotor()<<endl;
	objCarro.setTamano("Muy grande");
	cout<<"Tamano del carro: "<<objCarro.getTamano()<<endl;
	objCarro.setPlacas("Dan86");
	cout<<"Placas: "<<objCarro.getPlacas()<<endl;*/
	return 0;
}
