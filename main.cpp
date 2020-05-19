#include <bits/stdc++.h>

int main() {
	int v, t, atraso, s1=0, s2=0, s3=0, resultado=0;
	char p;
	
	cout << "SISTEMA DE PERFIL DE CLIENTE" << endl << "--------------------------------" << endl << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;
	cout << "Quantas compras o cliente fez no ultimo ano?"<<endl;
	cin >>v;
	cout << "Qual o ticket medio?" << endl << endl;
	cin >> t;
	cout << "Quantas vezes o cliente atrasou o pagamento?" << endl;
	cin >> atraso;
	cout << "A maioria das compras foi em dinheiro, cartao, ou boleto?" << endl;
	cin >> p;
	if(t>3000)s1+=60;
else if(v<=2)s1+=20;
else if(v>2)s1+=40;


	
	
	
	
	return 0;
}
