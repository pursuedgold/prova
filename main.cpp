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
cout << "Score de volume de compras = " << s1 << " pontos"<< endl;
if(atraso>1 ||v=0)s2=0;
else if(atraso==1)s2=15;
else s2=30;
if(p=='D')s3=5;
else s3=10;
cout << "Score de inadimplencia = " << s2 << " pontos"<< endl;
cout << "Score de forma de pagamento = " << s3 << " pontos"<< endl;
resultado = s1+s2+s3;
if(resultado<=25)cout << "Classificacao final = CLIENTE BRONZE" << endl;
else if(resultado<=75)cout << "Classificacao final = CLIENTE PRATA" << endl;
else cout << "Classificacao final = CLIENTE PRATA" << endl;

	
	
	
	
	return 0;
}
