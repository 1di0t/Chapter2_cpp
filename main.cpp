#include "stack.cpp"
#include "pokemon.h"
#include <stdexcept>

typedef Stack<Pokemon> PokemonStack;//���� //Aliases

int main()
{
	try {
		//Stack<Pokemon> poke_Stack(6);
		PokemonStack poke_Stack(6);

		poke_Stack.push(Pokemon("���̸�"));
		poke_Stack.push(Pokemon("��ī��"));
		poke_Stack.push(Pokemon("�Ḹ��"));
		poke_Stack.push(Pokemon("���ڸ�"));
		poke_Stack.push(Pokemon("���̿���"));
		poke_Stack.push(Pokemon("���Ƽ��"));
		//poke_Stack.push(Pokemon("�ܱ�"));

		for (int i = 0; i < 7; i++) {
			cout << "����!" << poke_Stack.pop().get_poke() << "!!" << endl;
		}
	}
	catch (const overflow_error e) {//save memory
		cout << e.what() << endl;
	}
	catch (const out_of_range e) {
		cout << e.what() << endl;
	}
	


	//Stack<string> stack(20);
	//stack.push("����");
	//stack.push("����");
	//stack.push("������");
	//stack.push("�˹�");
	//cout << stack.pop() << endl;
	//cout << stack.pop();
	return 0;
}