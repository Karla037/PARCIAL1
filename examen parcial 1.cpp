//objetos de un hospital, clase cuarto de un hospital
#include <iostream>
#include <string>

using namespace std;

class cuarto{
	private:
		string nombre;
		string color;
		string tamanio;
		string material;
		string forma;
		
	public:
		cuarto (string, string, string, string, string);
	~cuarto();
	//declaracion de metodos	
	void sostener(); 
	void oxigeno();
	void dar_comodidad();
	void descansar();
	void necesidades();
	
};
//constructor
cuarto::cuarto(string _nombre, string _color, string _tamanio, string _material, string _forma){
	nombre = _nombre;
	color = _color;
	tamanio = _tamanio;
	material = _material;
	forma = _forma;
	cout<<"Se creo el objeto " <<nombre <<endl;
	
}
//destructor
cuarto::~cuarto(){
	cout<< "Se destruyo el objeto" <<nombre <<endl;
}

//funcionalidades
 
 void cuarto::sostener(){
 	cout << "La " <<nombre<<" es de color "<<color<<", el tamanio es "<<tamanio<<", es de material "<<material<<" y sirve para sostener el colchon."<<endl<<endl;
 }
void cuarto::oxigeno(){
 	cout << "La " <<nombre<<" es de color "<<color<<", la forma es "<<forma<<", sirve para dar oxigeno"<<endl<<endl;
 }
 void cuarto::dar_comodidad(){
 	cout << "El " <<nombre<<" es de color"<<color<<" y de tamanio "<<tamanio<<", es de material "<<material<<", sirve dar comodidad al paciente."<<endl<<endl;
 }
 void cuarto::descansar(){
 	cout << "La " <<nombre<<" es de color "<<color<<" y de tamanio "<<tamanio<<", es de material "<<material<<", se utiliza para que descanse la visita"<<endl<<endl;
 }
 void cuarto::necesidades(){
 	cout << "El " <<nombre<<" es de color "<<color<<" y de tamanio "<<tamanio<<", es de material "<<material<<", sirve para realizar las necesidades basicas."<<endl<<endl;
 }
 
 //funcion principal y mostrador en pantalla
 int main (){
 	cuarto camilla = cuarto("Camilla","gris","grande","acero", "rectangular");
 	camilla.sostener();
 	
 		cuarto mascarilla = cuarto("Mascarilla de Oxineno","transparente","pequeña","silicona", "circular");
 	mascarilla.oxigeno();
 	
 		cuarto colchon = cuarto("Colchon","blanco","grande","algodon", ".");
 	colchon.dar_comodidad();
 	
 		cuarto silla = cuarto("Silla","cafe","mediano","cuero", "rectangular");
 	camilla.descansar();
 		cuarto sanitario = cuarto("Sanitario","blanco","mediano","granito", "");
 	sanitario.necesidades();
 	
 	system ("pause");
 	return 0;
 }