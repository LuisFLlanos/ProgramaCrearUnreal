#include <iostream>
#include <string>

using namespace std;

class Player{
private:
	short opcionJugada;
	int puntaje;
	int evaluar(Player contrario){
		if(opcionJugada == contrario.opcionJugada)
			return 0;
		
		if((opcionJugada == 1 && contrario.opcionJugada == 3) ||
			(opcionJugada == 2 && contrario.opcionJugada == 1) ||
			(opcionJugada == 3 && contrario.opcionJugada == 2))
			return 1;
	return -1;
	}
	
public:
		string nombre;
		Player(){
			puntaje = 0;
		}
		Player(int puntajeInicial) {
			puntaje = puntajeInicial;
		}
		void seleccionar(){
			do{
				cout<<nombre<<", elija (1: Piedra, 2: Papel, 3: Tijera): ";
				cin>>opcionJugada;
			} while(opcionJugada < 1 || opcionJugada > 3);
		}
		
		string traducir(){
			if(opcionJugada == 1) return "()";
			if(opcionJugada == 2) return "[]";
			return "8<";
		}
		
		void jugar(Player &contrario) {
			
			int resultado = evaluar(contrario);
			
			cout<<endl;
			cout<<nombre << " " << traducir()
				<<" VS "
				<<contrario.nombre << " "
				<<contrario.traducir() << endl;
			
			if (resultado == 1) {
				puntaje++;
				cout << ">>> RESULTADO: ¡" << nombre << " gana la ronda!" << endl;
			}
			else if (resultado == -1) {
				contrario.puntaje++;
				cout << ">>> RESULTADO: ¡" << contrario.nombre << " gana la ronda!" << endl;
			}
			else {
				cout << ">>> RESULTADO: Empate técnico." << endl;
			}
			
			cout << endl;
		}
		
		float obtenerEficiencia(int nroPartidas) {
			return (puntaje / (float)nroPartidas) * 100.0;
		}
};
int main() {
	
	Player p1, p2, p3;
	p1.nombre="SubZero";
	p2.nombre="Scorpion";
	p3.nombre="Reptile";
	cout<<"          DUELO DE JUGADORES (POO) P1 VS P2         "<<endl;
	for (int i = 1; i <= 3; i++) {
		
		cout<<endl;
		cout<<"[PARTIDA "<<i<<": "<<p1.nombre<<" vs "<<p2.nombre<<"]"<<endl;
		p1.seleccionar();
		p2.seleccionar();
		p1.jugar(p2);
	}
	cout<<"          DUELO DE JUGADORES (POO) P2 VS P3         "<<endl;
	for(int i = 1; i <= 3; i++){
		cout<<endl;
		cout<<"[PARTIDA "<<i<<": "<<p2.nombre<<" vs "<<p3.nombre<<"]"<<endl;
		p2.seleccionar();
		p3.seleccionar();
		p2.jugar(p3);
	}
	
	cout<<endl;
	cout<<"-------------------------------------------" << endl;
	cout<<"RESUMEN DE EFICIENCIA (Tras 3 Partidas):" << endl;
	cout<<"-------------------------------------------" << endl;
	
	cout<<"1. " << p1.nombre << " : " << p1.obtenerEficiencia(3) << "%" << endl;
	cout<<"2. " << p2.nombre << " : " << p2.obtenerEficiencia(3) << "%" << endl;
	cout<<"3. " << p3.nombre << " : " << p3.obtenerEficiencia(3) << "%" << endl;
	
	cout<<"===========================================" << endl;
	return 0;
}
