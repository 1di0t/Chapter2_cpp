#include "stack.cpp"
#include "pokemon.h"
#include <stdexcept>

typedef Stack<Pokemon> PokemonStack;//별명 //Aliases

int main()
{
	try {
		//Stack<Pokemon> poke_Stack(6);
		PokemonStack poke_Stack(6);

		poke_Stack.push(Pokemon("파이리"));
		poke_Stack.push(Pokemon("피카츄"));
		poke_Stack.push(Pokemon("잠만보"));
		poke_Stack.push(Pokemon("리자몽"));
		poke_Stack.push(Pokemon("가이오가"));
		poke_Stack.push(Pokemon("기라티나"));
		//poke_Stack.push(Pokemon("단굴"));

		for (int i = 0; i < 7; i++) {
			cout << "가랏!" << poke_Stack.pop().get_poke() << "!!" << endl;
		}
	}
	catch (const overflow_error e) {//save memory
		cout << e.what() << endl;
	}
	catch (const out_of_range e) {
		cout << e.what() << endl;
	}
	


	//Stack<string> stack(20);
	//stack.push("감자");
	//stack.push("고구마");
	//stack.push("옥수수");
	//stack.push("알밤");
	//cout << stack.pop() << endl;
	//cout << stack.pop();
	return 0;
}