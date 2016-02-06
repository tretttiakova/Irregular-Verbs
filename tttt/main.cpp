#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int verb_quant = 77, hhh;
sf::RenderWindow window(sf::VideoMode(800, 600), "IRREGULAR VERBS");
bool est[10] = { false };
sf::String s[100][2] = { { "break", "broke" },
{ "become", "became" },
{ "build", "built" },
{ "buy", "bought" },
{ "catch", "caught" },
{ "choose", "chose" },
{ "cut", "cut" },
{ "do", "did" },
{ "drink", "drank" },
{ "draw", "drew" },
{ "feel", "felt" },
{ "find", "found" },
{ "eat", "ate" },
{ "fly", "flew" },
{ "forget", "forgot" },
{ "get", "got" },
{ "give", "gave" },
{ "go", "went" },
{ "keep", "kept" },
{ "leave", "left" },
{ "make", "made" },
{ "meet", "met" },
{ "run", "ran" },
{ "say", "said" },
{ "send", "sent" },
{ "shake", "shook" },
{ "show", "showed" },
{ "sing", "sang" },
{ "sit", "sat" },
{ "sleep", "slept" },
{ "spend", "spent" },
{ "stand", "stood" },
{ "steal", "stole" },
{ "swim", "swam" },
{ "take", "took" },
{ "teach", "taught" },
{ "tell", "told" },
{ "think", "thought" },
{ "throw", "threw" },
{ "understand", "understood" },
{ "win", "won" },
{ "beat", "beat" },
{ "begin", "began" },
{ "bet", "bet" },
{ "bite", "bit" },
{ "blow", "blew" },
{ "bring", "brought" },
{ "come", "came" },
{ "cost", "cost" },
{ "dig", "dug" },
{ "deal", "dealt" },
{ "drive", "drove" },
{ "fall", "fell" },
{ "feed", "fed" },
{ "fight", "fought" },
{ "forgive", "forgave" },
{ "freeze", "froze" },
{ "grow", "grew" },
{ "hear", "heard" },
{ "hide", "hid" },
{ "hold", "held" },
{ "hurt", "hurt" },
{ "know", "knew" },
{ "lay", "laid" },
{ "lose", "lost" },
{ "read", "read" },
{ "see", "saw" },
{ "sell", "sold" },
{ "shine", "shone" },
{ "speak", "spoke" },
{ "wake", "woke" },
{ "write", "wrote" },
{ "burn", "burnt" },
{ "dream", "dreamt" },
{ "learn", "learnt" },
{ "mistake", "mistook" },
{ "ring", "rang" },
			};
string ans = "";


int main()
{
	window.setKeyRepeatEnabled(false);
	window.clear(sf::Color(245, 255, 250));
	bool end = false;
	sf::Font font;
	if (!font.loadFromFile("simple.ttf"))
	{
		std::cout << "error: no font" << std::endl;
	}
	sf::Text rans;

	srand(time(NULL));
	int form1[10], xxx;
	bool sim = false;
	form1[0] = rand() % verb_quant;
	for (hhh = 1; hhh < 10; hhh++)
	{
		form1[hhh] = rand() % verb_quant;
		while (true)
		{
			sim = false;
			for (xxx = 0; xxx < hhh; xxx++)
			{
				if (form1[hhh] == form1[xxx])
					sim = true;
			}
			if (sim == true)
				form1[hhh] = rand() % verb_quant;
			else
				break;
		}
	}
	int move = 110;
	for (int i = 0; i < 10; i++)
	{
		sf::Text verb;
		verb.setString(s[form1[i]][0]);
		verb.setPosition(10, move);
		verb.setColor(sf::Color::Black);
		verb.setFont(font);
		verb.setCharacterSize(28);
		window.draw(verb);
		move += 45;
	}
	sf::Text result;
	result.setPosition(60, 550);
	result.setColor(sf::Color::Red);
	result.setCharacterSize(36);
	result.setString("/10 right answers");
	result.setFont(font);
	sf::Text title;
	title.setString("TEST: Irregular Verbs");
	title.setPosition(270, 0);
	title.setColor(sf::Color::Black);
	title.setFont(font);
	title.setCharacterSize(36);

	sf::Text inv;
	inv.setString("First form:");
	inv.setPosition(10, 50);
	inv.setColor(sf::Color::Black);
	inv.setFont(font);
	inv.setCharacterSize(28);

	sf::Text inv2;
	inv2.setString("Second form:");
	inv2.setPosition(210, 50);
	inv2.setColor(sf::Color::Black);
	inv2.setFont(font);
	inv2.setCharacterSize(28);
	
	sf::Text OK, no;
	sf::Text answer[10];
	for (hhh = 0; hhh < 10; hhh++)
	{
		answer[hhh].setColor(sf::Color::Black);
		answer[hhh].setFont(font);
		answer[hhh].setCharacterSize(28);
	}
	sf::RectangleShape f1(sf::Vector2f(210, 35)), f2(sf::Vector2f(210, 35)), f3(sf::Vector2f(210, 35)), f4(sf::Vector2f(210, 35)), f5(sf::Vector2f(210, 35)), f6(sf::Vector2f(210, 35)), f7(sf::Vector2f(210, 35)), f8(sf::Vector2f(210, 35)), f9(sf::Vector2f(210, 35)), f10(sf::Vector2f(210, 35));
	f1.setFillColor(sf::Color(235, 235, 235));
	f1.setPosition(210, 110);
	f2.setFillColor(sf::Color(235, 235, 235));
	f2.setPosition(210, 155);
	f3.setFillColor(sf::Color(235, 235, 235));
	f3.setPosition(210, 200);
	f4.setFillColor(sf::Color(235, 235, 235));
	f4.setPosition(210, 245);
	f5.setFillColor(sf::Color(235, 235, 235));
	f5.setPosition(210, 290);
	f6.setFillColor(sf::Color(235, 235, 235));
	f6.setPosition(210, 335);
	f7.setFillColor(sf::Color(235, 235, 235));
	f7.setPosition(210, 380);
	f8.setFillColor(sf::Color(235, 235, 235));
	f8.setPosition(210, 425);
	f9.setFillColor(sf::Color(235, 235, 235));
	f9.setPosition(210, 470);
	f10.setFillColor(sf::Color(235, 235, 235));
	f10.setPosition(210, 515);
	int right = 0, wrong = 0;
	
	int k = 0;
	while (window.isOpen())
	{
		//window.clear(sf::Color::White);
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		sf::Text warning, space;
		warning.setColor(sf::Color(0, 154, 205));
		warning.setFont(font);
		warning.setCharacterSize(28);
		warning.setPosition(440, 60);
		warning.setString("Use SPACE instead of ENTER");
		window.draw(warning);
		
		window.draw(title);
		window.draw(inv);
		window.draw(inv2);
		int move2 = 110 + k * 45;

		window.draw(f1); window.draw(f2); window.draw(f3); window.draw(f4);
		window.draw(f5); window.draw(f6); window.draw(f7); window.draw(f8);
		window.draw(f9); window.draw(f10);

		if (k < 10)
		{
			answer[k].setString(ans);
			answer[k].setPosition(210, move2);

			window.draw(answer[k]);
		}

		/*sf::Text inst;
		inst.setString("Press and hold the left button for instructions");
		inst.setPosition(10, 560);
		inst.setColor(sf::Color::Blue);
		inst.setFont(font);
		inst.setCharacterSize(28);
		window.draw(inst);*/

		/*sf::RectangleShape square(sf::Vector2f(790, 590));
		square.setPosition(5, 5);
		square.setFillColor(sf::Color::White);
		square.setOutlineThickness(5);
		square.setOutlineColor(sf::Color::Red);*/

		/*sf::Text instructions;
		instructions.setString("INSTRUCTIONS:");
		instructions.setPosition(280, 10);
		instructions.setColor(sf::Color::Red);
		instructions.setFont(font);
		instructions.setCharacterSize(38);*/

		//int form1[10];
		//srand(time(NULL));
		
		//sf::Vector2i localPosition = sf::Mouse::getPosition(window);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{  
			ans += 'a';
			//cout << 'a';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
		{
			ans += 'b';
			//cout << 'b';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			ans += 'c';
			//cout << 'c';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			ans += 'd';
			//cout << 'd';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			ans += 'e';
			//cout << 'e';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		{
			ans += 'f';
			//cout << 'f';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
		{
			ans += 'g';
			//cout << 'g';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		{
			ans += 'h';
			//cout << 'h';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		{
			ans += 'i';
			//cout << 'i';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		{
			ans += 'j';
			//cout << 'j';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
		{
			ans += 'k';
			//cout << 'k';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
		{
			ans += 'l';
			//cout << 'l';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
		{
			ans += 'm';
			//cout << 'm';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
		{
			ans += 'n';
			//cout << 'n';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
		{
			ans += 'o';
			//cout << 'o';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
		{
			ans += 'p';
			//cout << 'p';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		{
			ans += 'q';
			//cout << 'q';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
		{
			ans += 'r';
			//cout << 'r';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			ans += 's';
			//cout << 's';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
		{
			ans += 't';
			//cout << 't';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
		{
			ans += 'v';
			//cout << 'v';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
		{
			ans += 'u';
			//cout << 'u';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			ans += 'w';
			//cout << 'w';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		{
			ans += 'x';
			//cout << 'x';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
		{
			ans += 'y';
			//cout << 'y';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
		{
			ans += 'z';
			//cout << 'z';
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
			{
			};
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
		{
			if (ans.length() != 0)
			{
				ans.erase(ans.end() - 1);
				answer[k].setString(ans);
				answer[k].setPosition(210, move2);

				window.draw(answer[k]);
			}
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
			{
			};
		}
		for (hhh = 0; hhh < 10; hhh++)
		{
			window.draw(answer[hhh]);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && k < 10)
		{
			answer[k].setString(ans);
			answer[k].setPosition(210, move2);
			window.draw(answer[k]);
			if (ans == s[form1[k]][1])
			{
				est[k] = true;
				right++;
				OK.setCharacterSize(28);
				OK.setColor(sf::Color::Blue);
				OK.setPosition(450, move2);
				OK.setFont(font);
				OK.setString("+");
				window.draw(OK);
				ans = "";
				//cout << "  +++";
			}
			else
			{
				no.setCharacterSize(22);
				no.setColor(sf::Color::Blue);
				no.setPosition(600, move2);
				no.setFont(font);
				no.setString(s[form1[k]][1]);
				window.draw(no);
				rans.setCharacterSize(22);
				rans.setColor(sf::Color::Red);
				rans.setPosition(440, move2);
				rans.setFont(font);
				rans.setString("-   right answer:");
				window.draw(rans);
				//cout << "  ---";
				ans = "";
			}
			k++;
			cout << endl;
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
			{
			};
			//cout << k << endl;
		}
		sf::Text points, gj;
		if (right == 10)
		{
			points.setString("10");
		}
		else
		{
			char c = right + '0';
			points.setString(c);
		}
		
		gj.setColor(sf::Color::Red);
		gj.setFont(font);
		gj.setPosition(430, 550);
		gj.setCharacterSize(36);
		
		sf::Text mark;
		mark.setColor(sf::Color::Red);
		mark.setFont(font);
		mark.setPosition(730, 500);
		mark.setCharacterSize(80);
		points.setColor(sf::Color::Red);
		points.setFont(font);
		points.setPosition(20, 550);
		points.setCharacterSize(36);
		if (k == 10 && end == false)
		{
			//cout << "right answers: " << right << "0%";
			window.draw(points);
			window.draw(result);
			if (right > 8)
			{
				mark.setString("5");
				if (right == 10)
				{
					gj.setString("Excellent!");
				}
				else
				{
					mark.setString("5-");
					mark.setPosition(725, 500);
				}
			}
			else if (right > 6)
			{
				mark.setString("4");
				gj.setString("Good job!");
			}
			else if (right > 4)
			{
				mark.setString("3");
				gj.setString("Satisfactory");
			}
			else
			{
				mark.setPosition(580, 545);
				mark.setCharacterSize(36);
				mark.setString("Try again!");
			}
			window.draw(mark);
			window.draw(gj);
			end = true;
		}
		window.display();
	}

	return 0;
}

