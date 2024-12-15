#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace game {

	class GameMenu
	{
		float menu_x;
		float menu_y;
		int menu_step;  // ���������� ����� ��������� ����
		int max_menu;  // ������������ ���-�� ������� ����
		int size_font;
		int main_menu_selected = 0;  // ����� ���������� ������ ����
		Font font;
		std::vector<Text> main_menu;  // ������ �������� ����

		Color menu_text_color = Color::White;
		Color chose_text_color = Color::Yellow;
		Color border_color = Color::Black;

		// ��������� ������ ����
		void SetInitText(Text& text, String str, float xpos, float ypos);

		RenderWindow& my_window;  // ������ �� ����������� ����

	public:

		GameMenu(RenderWindow& window, float menux, float menuy, const std::vector<String>& name, int size_font = 60, int step = 80);

		void draw();

		void move_up();

		void move_down();

		void set_color_text_menu(Color men_color, Color cho_color, Color bord_color); 

		void Allign_menu(int posx);

		int get_select_menu_number()
		{
			return main_menu_selected;
		}

		void update_menu_texts(const std::vector<String>& new_names);
	};


}

