
#ifndef vaca
#define vaca

using namespace std;
class vaca{
	
	public:
		void setNombre(string v);
		void setPeso(float v);
		void setLitroLeche(float v);
		void setRaza(int v);
		string getNombre();
		float getPeso();
		float getLitroLeche();
		int getRaza();
		vaca();
		~vaca();
	private:
		string nombre;
		float peso;
		float litroLeche;
		int raza;
};

#endif 
