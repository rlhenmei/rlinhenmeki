////////// #define _CRT_SECURE_NO_WARNINGS 1
////////////#include<graphics.h>
////////////#include<conio.h>
////////////int main()
////////////{
////////////	initgraph(840, 680);
////////////	circle(300, 250, 200);
////////////	_getch();
////////////	closegraph();
////////////	while (1);
////////////	return 0;
////////////}
//////////#include <graphics.h>
//////////#include <conio.h>
//////////#include<math.h>
//////////
//////////#define PI acos(-1.0)
//////////#define Width 600
//////////#define Height 600
//////////
//////////bool SetWindowTransparent(HWND hwnd, COLORREF crkcolor, BYTE bAlpha, DWORD dwFlags);
//////////void SetWindowsForm(HWND hWnd);
//////////// str������Ƶ��ַ���
//////////// variable ����ÿ�εı���
//////////// fors ÿ����Ҫѭ���Ĵ�������
//////////// R ��Ȧ�İ뾶
//////////// Long �̶ȵĳ���
//////////void DrawCircle(TCHAR str[25], int variable, int fors, int R);				// ����һȦ�ַ�	
//////////void DrawKD(int variable, int fors, int R, int Long);						// ���ƿ̶�
//////////void DrawProtractor();														// ����������					
//////////void OutputDegrees(int x, int y);											// ����̶�
//////////double Distance(int x, int y);
//////////double Azimuth(int star_x, int star_y, int end_x, int end_y);				// ���㷽λ��
//////////void RadianToAngle(double Radian, int* Degree, int* Minute, int* Seconds);	// ����ת�Ƕ�
//////////
//////////int main()
//////////{
//////////	initgraph(Width, Height);			// ��ʼ��ͼ�δ���
//////////	HWND hWnd = GetHWnd();				// ��ȡ���ھ��
//////////	SetWindowsForm(hWnd);				// ����Ϊ����ΪԲ�β�͸��
//////////	DrawProtractor();					// �滭������
//////////
//////////	ExMessage m;						// ���������Ϣ
//////////	while (true)
//////////	{
//////////		m = getmessage(EM_MOUSE);		// ��ȡһ�������Ϣ
//////////		switch (m.message)
//////////		{
//////////		case WM_LBUTTONDOWN:
//////////			// ���������£���ƭ windows �����˱�������
//////////			PostMessage(hWnd, WM_NCLBUTTONDOWN, HTCAPTION, MAKELPARAM(m.x, m.y));
//////////			if (Distance(m.x, m.y) >= (Height / 2 - 29) && Distance(m.x, m.y) <= (Height / 2 - 15))
//////////			{
//////////				cleardevice();
//////////				DrawProtractor();
//////////				OutputDegrees(m.x, m.y);
//////////			}
//////////			break;
//////////		case WM_RBUTTONUP:				// ������Ҽ��˳�����
//////////			closegraph();
//////////			return 0;
//////////		}
//////////	}
//////////}
//////////
//////////bool SetWindowTransparent(HWND hwnd, COLORREF crkcolor, BYTE bAlpha, DWORD dwFlags)
//////////{
//////////	HINSTANCE hm = GetModuleHandle(_T("USER32.DLL"));
//////////	if (hm)
//////////	{
//////////		FARPROC fun = GetProcAddress(hm, "SetLayeredWindowAttributes");
//////////		bool (WINAPI * SetLayeredWindowAttributes)(HWND, COLORREF, BYTE, DWORD) = (bool (WINAPI*) (HWND, COLORREF, BYTE, DWORD))fun;
//////////		if (SetLayeredWindowAttributes)
//////////		{
//////////			LONG ret = GetWindowLong(hwnd, GWL_EXSTYLE);
//////////			ret |= WS_EX_LAYERED;
//////////			SetWindowLong(hwnd, GWL_EXSTYLE, ret);
//////////			SetLayeredWindowAttributes(hwnd, crkcolor, bAlpha, dwFlags);
//////////		}
//////////		FreeLibrary(hm);
//////////		return true;
//////////	}
//////////	else
//////////	{
//////////		return false;
//////////	}
//////////}
//////////
//////////void SetWindowsForm(HWND hWnd)
//////////{
//////////	setbkcolor(WHITE);
//////////	cleardevice();
//////////	// ��ȡ���ڱ߿���
//////////	RECT rcClient, rcWind;
//////////	GetClientRect(hWnd, &rcClient);
//////////	GetWindowRect(hWnd, &rcWind);
//////////	int cx = ((rcWind.right - rcWind.left) - rcClient.right) / 2;
//////////	int cy = ((rcWind.bottom - rcWind.top + GetSystemMetrics(SM_CYCAPTION)) - rcClient.bottom) / 2;
//////////	// ����Բ������
//////////	HRGN rgn = CreateEllipticRgn(0 + cx, 0 + cy, Width + cx, Height + cy);
//////////	SetWindowRgn(hWnd, rgn, true);
//////////	SetWindowTransparent(hWnd, WHITE, 100, 0x1);
//////////	SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
//////////}
//////////
//////////void DrawCircle(TCHAR str[25], int variable, int fors, int R)
//////////{
//////////	settextcolor(RED);
//////////	double a, x0, y0, w, h, x1, y1;
//////////	int x, y;
//////////	settextstyle(22, 0, L"΢���ź�", variable * 3600 / fors, variable * 3600 / fors, 0, false, false, false, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH);
//////////	a = variable * PI * 2 / fors;
//////////	w = textwidth(str);																			// �����ַ����� w���� h
//////////	h = textheight(str);
//////////	x1 = R * cos(a);																			// ��������ַ��������Ͻ�λ��
//////////	y1 = R * sin(a);
//////////	x0 = x1 * cos(-a) - y1 * sin(-a);															// ���ַ�����ԭ��˳ʱ����ת a ����
//////////	y0 = y1 * cos(-a) + x1 * sin(-a);
//////////	x0 -= w / 2;																				// ���ַ���������ƫ�� w/2��h/2
//////////	y0 += h / 2;																				// ��ͼ��������Ϊ��
//////////	x = (int)(x0 * cos(a) - y0 * sin(a));														// ���ַ�����ԭ����ʱ����ת a ����
//////////	y = (int)(y0 * cos(a) + x0 * sin(a));
//////////	outtextxy(int(Width / 2 + x + 0.5), int(Height / 2 - y + 0.5), str);						// ��ͼ��������Ϊ��
//////////}
//////////
//////////void DrawKD(int variable, int fors, int R, int Long)
//////////{
//////////	setlinecolor(RED);
//////////	setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 1);
//////////	double a, x0, y0, x1, y1;
//////////	double star_x, star_y;
//////////	double end_x, end_y;
//////////	a = variable * PI * 2 / fors;
//////////	x1 = R * cos(a);
//////////	y1 = R * sin(a);
//////////	x0 = x1 * cos(-a) - y1 * sin(-a);
//////////	y0 = y1 * cos(-a) + x1 * sin(-a);
//////////	star_x = (x0 * cos(a) - y0 * sin(a));
//////////	star_y = (y0 * cos(a) + x0 * sin(a));
//////////	x1 = (R - Long) * cos(a);
//////////	y1 = (R - Long) * sin(a);
//////////	x0 = x1 * cos(-a) - y1 * sin(-a);
//////////	y0 = y1 * cos(-a) + x1 * sin(-a);
//////////	end_x = (x0 * cos(a) - y0 * sin(a));
//////////	end_y = (y0 * cos(a) + x0 * sin(a));
//////////	line((int)(Width / 2 + star_x), (int)(Width / 2 + star_y), (int)(Width / 2 + end_x), (int)(Width / 2 + end_y));
//////////}
//////////
//////////void DrawProtractor()
//////////{
//////////	setlinestyle(PS_SOLID, 2);
//////////	setlinecolor(BLACK);
//////////	circle(Width / 2, Height / 2, Height / 2 - 10);
//////////	setlinestyle(PS_SOLID, 30);
//////////	setlinecolor(LIGHTRED);
//////////	circle(Width / 2, Height / 2, 90);
//////////	setlinestyle(PS_SOLID, 14);
//////////	circle(Width / 2, Height / 2, Height / 2 - 22);
//////////	setlinecolor(BLACK);
//////////	setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 1);
//////////	line(10, Height / 2, Width / 2 - 2, Height / 2);
//////////	line(Width / 2 + 2, Height / 2, Width - 10, Height / 2);
//////////	line(Width / 2, Height / 2 - 50, Width / 2, Height / 2 - 2);
//////////	line(Width / 2, Height / 2 + 2, Width / 2, Height / 2 + 50);
//////////	circle(Width / 2, Height / 2, 2);
//////////	circle(Width / 2, Height / 2, 150);
//////////	circle(Width / 2, Height / 2, 50);
//////////
//////////	TCHAR str[25];
//////////	for (int i = 0; i < 360; i++)
//////////	{
//////////		if (i % 10 == 0)
//////////		{
//////////			DrawKD(i / 10, 36, Height / 2 - 30, 30);
//////////			DrawKD(i / 10, 36, 165, 30);
//////////			DrawKD(i / 10, 36, 65, 15);
//////////			_stprintf_s(str, _T("%d"), i);
//////////			DrawCircle(str, i / 10, 36, Height / 2 - 75);
//////////			continue;
//////////		}
//////////		if (i % 5 == 0)
//////////		{
//////////			DrawKD(i / 5, 72, Height / 2 - 30, 15);
//////////			continue;
//////////		}
//////////		DrawKD(i, 360, Height / 2 - 30, 10);
//////////	}
//////////}
//////////
//////////double Distance(int x, int y)
//////////{
//////////	return sqrt((double)((Width / 2.0 - x) * (Width / 2.0 - x) + (Height / 2.0 - y) * (Height / 2.0 - y)));
//////////}
//////////
//////////void OutputDegrees(int x, int y)
//////////{
//////////	setlinecolor(RED);
//////////	setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 1);
//////////	line(x, y, Width / 2, Height / 2);
//////////	double Radian = Azimuth(x, y, Width / 2, Height / 2);
//////////	int Degree, Minute, Seconds;
//////////	RadianToAngle(Radian, &Degree, &Minute, &Seconds);
//////////	TCHAR str[20];
//////////	settextcolor(BLACK);
//////////	settextstyle(22, 0, L"΢���ź�", 0, 0, 0, false, false, false, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH);
//////////	_stprintf_s(str, _T("%d��%d��%d��"), Degree, Minute, Seconds);
//////////	setbkmode(TRANSPARENT);
//////////	outtextxy(Width / 2 + 5, Height / 2 - 20, str);
//////////	_stprintf_s(str, _T("%lf��"), Radian);
//////////	outtextxy(Width / 2 + 5, Height / 2, str);
//////////}
//////////
//////////double Azimuth(int star_x, int star_y, int end_x, int end_y)
//////////{
//////////	double radian, x, y;
//////////	y = end_y - star_y;
//////////	x = end_x - star_x;
//////////	if (y == 0 && end_x > star_x) radian = PI;
//////////	else if (y == 0 && end_x < star_x) radian = 0;
//////////	else if (x == 0 && end_y > star_y) radian = PI / 2;
//////////	else if (x == 0 && end_y < star_y) radian = 3 * PI / 2;
//////////	else if (x > 0 && y > 0) radian = PI - atan(fabs(y) / fabs(x));
//////////	else if (x < 0 && y > 0) radian = atan(fabs(y) / fabs(x));
//////////	else if (x < 0 && y < 0) radian = 2 * PI - atan(fabs(y) / fabs(x));
//////////	else if (x > 0 && y < 0) radian = PI + atan(fabs(y) / fabs(x));
//////////	return radian;
//////////}
//////////
//////////void RadianToAngle(double Radian, int* Degree, int* Minute, int* Seconds)
//////////{
//////////	*Degree = int(Radian * 180 / PI);
//////////	*Minute = int((Radian * 180 / PI - *Degree) * 60);
//////////	*Seconds = int(((Radian * 180 / PI - *Degree) * 60 - *Minute) * 60);
//////////}
////////
////////#include <graphics.h>
////////#include <conio.h>
////////
////////#include <fstream>
////////
////////#include <vector>
////////#include <algorithm>
////////#include <string>
////////
////////#pragma comment(lib, "winmm.lib")
////////#pragma comment(lib, "MSIMG32.LIB")
////////
////////void putimage(IMAGE* image, int x, int y, IMAGE* target = nullptr, int transparency = 255)
////////{
////////	HDC target_dc = GetImageHDC(target);
////////	HDC image_dc = GetImageHDC(image);
////////
////////	int width = image->getwidth();
////////	int height = image->getheight();
////////
////////	BLENDFUNCTION blend_function = { AC_SRC_OVER, 0, static_cast<BYTE>(transparency), AC_SRC_ALPHA };
////////	AlphaBlend(target_dc, x, y, width, height,
////////		image_dc, 0, 0, width, height,
////////		blend_function);
////////}
////////
////////struct game_data_head
////////{
////////	int data_index;
////////};
////////
////////struct game_save
////////{
////////	int second;
////////
////////	time_t clock;
////////};
////////
////////void settextheight(int px)
////////{
////////	LOGFONT font;
////////
////////	gettextstyle(&font);
////////
////////	font.lfHeight = px;
////////
////////	settextstyle(&font);
////////}
////////
////////std::vector<game_save> saves;
////////
////////void menu_ui()
////////{
////////	settextheight(34);
////////
////////	settextcolor(RGB(30, 30, 30));
////////
////////	setbkcolor(RGB(244, 245, 249));
////////
////////	cleardevice();
////////
////////	outtextxy(200, 110, L"����ط���");
////////
////////	setfillcolor(RGB(93, 103, 251));
////////
////////	solidrectangle(162, 278, 217 + 163, 40 + 278);
////////	solidrectangle(163, 343, 217 + 163, 40 + 343);
////////
////////	settextcolor(RGB(251, 251, 251));
////////
////////	settextheight(30);
////////
////////	outtextxy(223, 283, L"��ʼ��Ϸ");
////////	outtextxy(223, 348, L"��������");
////////
////////	settextheight(23);
////////
////////	wchar_t* text = new wchar_t[1024];
////////
////////	settextcolor(RGB(30, 30, 30));
////////
////////	if (saves.empty() == false)
////////	{
////////		wsprintf(text, L"��ʷ��߼�¼ %d s", saves[0].second);
////////	}
////////	else
////////	{
////////		std::ofstream init_data("./game.dat");
////////
////////		game_data_head write_head;
////////
////////		write_head.data_index = 0;
////////
////////		init_data.write((char*)&write_head, sizeof(&write_head));
////////
////////		init_data.close();
////////
////////		wsprintf(text, L"��û�м�¼Ŷ~");
////////	}
////////
////////	outtextxy(9, 630, text);
////////}
////////
////////void init_game()
////////{
////////	initgraph(540, 660);
////////
////////	SetWindowText(GetHWnd(), L"����ط���");
////////
////////	// Read game save
////////	std::ifstream game_dat("./game.dat");
////////
////////	game_data_head head;
////////	game_save	   save;
////////
////////	game_dat.read((char*)&head, sizeof(&head));
////////
////////	for (int count = 0; count < head.data_index; ++count)
////////	{
////////		game_dat.read((char*)&save, sizeof(&save));
////////
////////		saves.push_back(save);
////////	}
////////
////////	game_dat.close();
////////
////////	std::sort(saves.begin(), saves.end(), [](game_save r, game_save l) -> bool { return r.second < l.second; });
////////
////////	LOGFONT font;
////////
////////	gettextstyle(&font);
////////
////////	font.lfQuality = PROOF_QUALITY;
////////
////////	_tcscpy_s(font.lfFaceName, L"΢���ź�");
////////
////////	setbkmode(TRANSPARENT);
////////
////////	settextstyle(&font);
////////
////////	menu_ui();
////////}
////////
////////void free_game()
////////{
////////	closegraph();
////////}
////////
////////// Grid's map
////////int map[5][5];
////////
////////// Every number's button
////////struct map_button
////////{
////////	int x;
////////	int y;
////////};
////////
////////map_button button[5][5];
////////
////////COLORREF   button_color[5][5] = { { RGB(245, 248, 251) } };
////////
////////time_t start_time;
////////
////////// Init grid
////////void init_map()
////////{
////////	srand((unsigned int)time(NULL));
////////
////////	int x = 31;
////////	int y = 61;
////////
////////	for (int i = 0, count = 0; i < 5; ++i)
////////	{
////////		for (int j = 0; j < 5; ++j)
////////		{
////////			button_color[i][j] = RGB(245, 248, 251);
////////
////////			++count;
////////
////////			map[i][j] = count;
////////
////////			button[i][j].x = x;
////////			button[i][j].y = y;
////////
////////			x += 81 + 13;
////////		}
////////
////////		x = 31;
////////
////////		y += 81 + 16;
////////	}
////////
////////	int temp_x;
////////	int temp_y;
////////
////////	for (int i = 4; i >= 0; --i)
////////	{
////////		for (int j = 4; j >= 0; --j)
////////		{
////////			temp_x = rand() % (i + 1);
////////			temp_y = rand() % (j + 1);
////////
////////			int temp = map[temp_x][temp_y];
////////
////////			map[temp_x][temp_y] = map[i][j];
////////
////////			map[i][j] = temp;
////////		}
////////	}
////////}
////////
////////void draw_map(bool show_number = true)
////////{
////////	int x = 31;
////////	int y = 61;
////////
////////	settextheight(32);
////////
////////	settextcolor(RGB(30, 30, 30));
////////
////////	outtextxy(200, 11, L"����ط���");
////////
////////	for (int i = 0, count = 0; i < 5; ++i)
////////	{
////////		for (int j = 0; j < 5; ++j)
////////		{
////////			std::wstring text = std::to_wstring(map[i][j]);
////////
////////			setfillcolor(button_color[i][j]);
////////
////////			solidrectangle(x, y, x + 81, y + 81);
////////
////////			if (show_number == true)
////////			{
////////				outtextxy(x + (81 / 2 - textwidth(text.c_str()) / 2), y + (81 / 2 - textheight(text.c_str()) / 2), text.c_str());
////////			}
////////
////////			x += 81 + 13;
////////		}
////////
////////		x = 31;
////////
////////		y += 81 + 16;
////////	}
////////
////////	setfillcolor(RGB(93, 103, 251));
////////
////////	settextheight(28);
////////
////////	solidrectangle(183, 599, 183 + 175, 599 + 40);
////////
////////	settextcolor(RGB(251, 251, 251));
////////
////////	outtextxy(230, 603, L"���¿�ʼ");
////////}
////////
////////// Accurate delay
////////void sleep(unsigned long long dealy)
////////{
////////	static time_t old_clock = clock();
////////
////////	old_clock += dealy;
////////
////////	while (clock() < old_clock)
////////	{
////////		Sleep(1);
////////	}
////////}
////////
////////void rank_ui()
////////{
////////	cleardevice();
////////
////////	settextcolor(RGB(30, 30, 30));
////////
////////	settextheight(32);
////////
////////	outtextxy(540 / 2 - textwidth(L"��������") / 2, 110, L"��������");
////////
////////	wchar_t* rank_text = new wchar_t[1024];
////////
////////	if (saves.empty() == false)
////////	{
////////		settextheight(36);
////////
////////		wsprintf(rank_text, L"TOP 1 : %d\0", saves[0].second);
////////
////////		outtextxy(540 / 2 - textwidth(rank_text) / 2, 170, rank_text);
////////
////////		if (saves.size() >= 2)
////////		{
////////			settextheight(28);
////////
////////			wsprintf(rank_text, L"TOP 2 : %d\0", saves[1].second);
////////
////////			outtextxy(540 / 2 - textwidth(rank_text) / 2, 170 + 38, rank_text);
////////		}
////////
////////		if (saves.size() >= 3)
////////		{
////////			settextheight(26);
////////
////////			wsprintf(rank_text, L"TOP 3 : %d", saves[2].second);
////////
////////			outtextxy(540 / 2 - textwidth(rank_text) / 2, 170 + 38 + 28, rank_text);
////////		}
////////	}
////////	else
////////	{
////////		outtextxy(540 / 2 - textwidth(L"���޼�¼") / 2, 207, L"���޼�¼");
////////	}
////////
////////	setfillcolor(RGB(93, 103, 251));
////////
////////	fillrectangle(195, 494, 195 + 175, 494 + 40);
////////
////////	settextheight(34);
////////
////////	settextcolor(RGB(251, 251, 251));
////////
////////	outtextxy(235, 498, L"���ز˵�");
////////
////////	ExMessage message;
////////
////////	while (true)
////////	{
////////		getmessage(&message);
////////
////////		if (message.message == WM_LBUTTONDOWN)
////////		{
////////			if (message.x >= 195 && message.x <= 195 + 175 &&
////////				message.y >= 494 && message.y <= 498 + 40)
////////			{
////////				return;
////////			}
////////		}
////////	}
////////}
////////
////////void start_game()
////////{
////////	cleardevice();
////////
////////	init_map();
////////
////////	draw_map(false);
////////
////////	int last_number = 0;
////////
////////	ExMessage message;
////////
////////	BeginBatchDraw();
////////
////////	settextheight(19);
////////
////////	settextcolor(RGB(30, 30, 30));
////////
////////	outtextxy(208, 569, L"������ⷽ�鿪ʼ");
////////
////////	FlushBatchDraw();
////////
////////	bool game_started = false;
////////
////////	wchar_t* used_time = new wchar_t[1024];
////////
////////	while (true)
////////	{
////////		draw_map();
////////
////////		while (peekmessage(&message))
////////		{
////////			if (game_started == true)
////////			{
////////				if (message.message == WM_MOUSEMOVE)
////////				{
////////					for (int i = 0, count = 0; i < 5; ++i)
////////					{
////////						for (int j = 0; j < 5; ++j)
////////						{
////////							button_color[i][j] = RGB(245, 248, 251);
////////						}
////////					}
////////
////////					for (int i = 0, count = 0; i < 5; ++i)
////////					{
////////						for (int j = 0; j < 5; ++j)
////////						{
////////							if (message.x >= button[i][j].x && message.y >= button[i][j].y &&
////////								message.x <= button[i][j].x + 81 && message.y <= button[i][j].y + 81)
////////							{
////////								button_color[i][j] = RGB(183, 215, 251);
////////
////////								cleardevice();
////////
////////								draw_map();
////////
////////								break;
////////							}
////////						}
////////					}
////////				}
////////				if (message.message == WM_LBUTTONDOWN)
////////				{
////////					for (int i = 0, count = 0; i < 5; ++i)
////////					{
////////						for (int j = 0; j < 5; ++j)
////////						{
////////							if (message.x >= button[i][j].x && message.y >= button[i][j].y &&
////////								message.x <= button[i][j].x + 81 && message.y <= button[i][j].y + 81)
////////							{
////////								if (last_number + 1 == map[i][j])
////////								{
////////									++last_number;
////////
////////									char* file_path = new char[1024];
////////									char* home_drive = nullptr;
////////
////////									size_t size = 0;
////////
////////									_dupenv_s(&home_drive, &size, "HOMEDRIVE");
////////
////////									mciSendStringA("close clicked", NULL, 0, NULL);
////////
////////									sprintf_s(file_path, 1024, "open \"%s/Windows/Media/tada.wav\" alias clicked", home_drive);
////////
////////									mciSendStringA(file_path, NULL, 0, NULL);
////////									mciSendStringA("play clicked", NULL, 0, NULL);
////////								}
////////
////////								break;
////////							}
////////						}
////////					}
////////				}
////////			}
////////
////////			if (message.message == WM_LBUTTONDOWN)
////////			{
////////				if (message.x >= 183 && message.x <= 183 + 175 &&
////////					message.y >= 599 && message.y <= 599 + 40)
////////				{
////////					start_game();
////////				}
////////			}
////////		}
////////
////////		if (game_started == false)
////////		{
////////			draw_map(false);
////////
////////			settextcolor(RGB(30, 30, 30));
////////			settextheight(20);
////////
////////			outtextxy(208, 569, L"������ⷽ�鿪ʼ");
////////
////////			if (message.message == WM_LBUTTONDOWN)
////////			{
////////				for (int i = 0, count = 0; i < 5; ++i)
////////				{
////////					for (int j = 0; j < 5; ++j)
////////					{
////////						if (message.x >= button[i][j].x && message.y >= button[i][j].y &&
////////							message.x <= button[i][j].x + 81 && message.y <= button[i][j].y + 81)
////////						{
////////							start_time = clock();
////////
////////							game_started = true;
////////
////////							break;
////////						}
////////					}
////////				}
////////			}
////////		}
////////
////////		if (game_started == true)
////////		{
////////			settextcolor(RGB(30, 30, 30));
////////
////////			settextheight(20);
////////
////////			wsprintf(used_time, L"����ʱ�� %ds\0", int((clock() - start_time) / 1000));
////////
////////			outtextxy(540 / 2 - textwidth(used_time) / 2, 569, used_time);
////////
////////			settextheight(16);
////////
////////			wsprintf(used_time, L"��һ�����֣�%d", last_number + 1);
////////
////////			outtextxy(540 / 2 - textwidth(used_time) / 2, 43, used_time);
////////		}
////////
////////		if (last_number == 25)
////////		{
////////			cleardevice();
////////
////////			draw_map();
////////
////////			settextcolor(RGB(30, 30, 30));
////////
////////			settextheight(20);
////////
////////			if (saves.empty() == true)
////////			{
////////				wsprintf(used_time, L"��Ϸ����, ����ʱ�� %ds, ���\"���¿�ʼ\"��ť�ٴ�����\0", int((clock() - start_time) / 1000));
////////			}
////////			else
////////			{
////////				if (int((clock() - start_time) / 1000) < saves[0].second)
////////				{
////////					wsprintf(used_time, L"��ϲ�����ԭ�м�¼ %ds, �¼�¼ %ds\0", saves[0].second, int((clock() - start_time) / 1000));
////////				}
////////
////////				if (int((clock() - start_time) / 1000) == saves[0].second)
////////				{
////////					wsprintf(used_time, L"��һ����ܴ��Ƽ�¼ %ds ��! ���� (������Ϸ��ʱ : %ds)\0", saves[0].second, int((clock() - start_time) / 1000));
////////				}
////////
////////				if (int((clock() - start_time) / 1000) > saves[0].second)
////////				{
////////					wsprintf(used_time, L"��%d s ���ܴ��Ƽ�¼ %ds ��! ���� (������Ϸ��ʱ : %ds)\0", int((clock() - start_time) / 1000) - saves[0].second,
////////						saves[0].second, int((clock() - start_time) / 1000));
////////				}
////////			}
////////
////////			outtextxy(540 / 2 - textwidth(used_time) / 2, 569, used_time);
////////
////////			FlushBatchDraw();
////////
////////			game_data_head temp_head;
////////			game_save      new_save;
////////
////////			temp_head.data_index = saves.size() + 1;
////////			new_save.second = int((clock() - start_time) / 1000);
////////
////////			std::ofstream save("./game.dat");
////////
////////			saves.push_back(new_save);
////////
////////			std::sort(saves.begin(), saves.end(), [](game_save r, game_save l) -> bool { return r.second < l.second; });
////////
////////			save.write((char*)&temp_head, sizeof(&temp_head));
////////
////////			for (auto& item : saves)
////////			{
////////				save.write((char*)&item, sizeof(&item));
////////			}
////////
////////			save.close();
////////
////////			while (true)
////////			{
////////				getmessage(&message);
////////
////////				if (message.message == WM_LBUTTONDOWN)
////////				{
////////					if (message.x >= 183 && message.x <= 183 + 175 &&
////////						message.y >= 599 && message.y <= 599 + 40)
////////					{
////////						start_game();
////////					}
////////				}
////////			}
////////		}
////////
////////		FlushBatchDraw();
////////
////////		cleardevice();
////////
////////		sleep(10);
////////	}
////////
////////	EndBatchDraw();
////////}
////////
////////int main()
////////{
////////	init_game();
////////
////////	ExMessage message;
////////
////////	while (true)
////////	{
////////		getmessage(&message);
////////
////////		if (message.message == WM_LBUTTONDOWN)
////////		{
////////			if (message.x >= 162 && message.y >= 278 &&
////////				message.x <= 162 + 217 && message.y <= 278 + 40)
////////			{
////////				start_game();
////////			}
////////			if (message.x >= 162 && message.y >= 343 &&
////////				message.x <= 162 + 217 && message.y <= 343 + 40)
////////			{
////////				rank_ui();
////////
////////				cleardevice();
////////
////////				menu_ui();
////////			}
////////		}
////////	}
////////
////////	_getch();
////////
////////	free_game();
////////
////////	return 0;
////////}
//////#include<graphics.h>
//////#include<conio.h>
//////#include<stdio.h>
//////#include<time.h>
//////
//////struct POS								// һ����Ľṹ��
//////{
//////	int x;
//////	int y;
//////	COLORREF color;
//////};
//////
//////void Interface(int Level, int Mark);	// ���ƽ��� Level Ϊ�ؿ�����Mark Ϊ����
//////POS InitColor(int Grade);				// ��ʼ����ɫ�ͷ����λ�� Grade �Ѷȵȼ� ��������
//////int GetNum(int Mark);					// �ж�һ�������Ǽ�λ��
//////void GameOver();						// ��Ϸ����
//////void AddMark(POS pos, int addMark);		// �ӷ���ʾ�Լ������������ƽ��
//////void ShowIips();						// ��ʾ��ʾ
//////
//////int main()
//////{
//////	initgraph(800, 600);
//////	int Level = 1;
//////	int Mark = 0;
//////	while (true)
//////	{
//////		int BeginTime = clock();
//////		int GameState = 0;	// ��Ϸ״̬
//////
//////		Interface(Level, Mark);
//////		POS pos = InitColor(Level / 10);
//////		MOUSEMSG m;
//////		while (true)
//////		{
//////			m = GetMouseMsg();
//////			switch (m.uMsg)
//////			{
//////			case WM_LBUTTONDOWN:
//////				if (pos.x - 35 < m.x && pos.x + 35 > m.x && pos.y - 35 < m.y && pos.y + 35 > m.y)
//////				{
//////					GameState = 1;
//////				}
//////				else
//////				{
//////					setlinecolor(WHITE);
//////					setlinestyle(PS_SOLID | PS_ENDCAP_SQUARE, 4);
//////					line(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
//////					line(m.x + 10, m.y - 10, m.x - 10, m.y + 10);
//////					if (GameState == 2)
//////					{
//////						GameState = 3;
//////					}
//////					else
//////					{
//////						GameState = 2;
//////					}
//////				}
//////				break;
//////			}
//////			if (GameState == 1)
//////			{
//////				int EndTime = clock();
//////				int Times = EndTime - BeginTime;
//////				int addMark = (int)(80000.0 / Times);
//////				AddMark(pos, addMark);
//////				Mark += addMark;
//////				Level++;
//////				break;
//////			}
//////			if (GameState == 2)
//////			{
//////				continue;
//////			}
//////			if (GameState == 3)
//////			{
//////				GameOver();
//////				Level = 1;
//////				Mark = 0;
//////				break;
//////			}
//////		}
//////	}
//////	_getch();
//////	return 0;
//////}
//////
//////void Interface(int Level, int Mark)
//////{
//////	setfillcolor(BLACK);
//////	bar(0, 0, 800, 50);
//////	bar(0, 550, 800, 750);
//////	settextcolor(WHITE);
//////	settextstyle(30, 0, L"΢���ź�");
//////	TCHAR str[25];
//////	_stprintf_s(str, _T("�� %d ��"), Level);
//////	outtextxy(50, 10, str);
//////	_stprintf_s(str, _T("%d"), Mark);
//////	outtextxy(750 - GetNum(Mark) * 15, 10, str);
//////}
//////
//////POS InitColor(int Grade)
//////{
//////	srand((unsigned int)time(NULL));
//////	float H = (float)(rand() % 360);			// ɫ��
//////	float S = (rand() % 100) / 100.f;			// ���Ͷ�
//////	float L = (rand() % 70 + 30) / 100.f;		// ����
//////	double h = 0;								// �߶�
//////	double v = 0;								// �ٶȣ��������£�
//////	double dv = 9.8 / 50;						// ���ٶȣ�ÿ 1/50 �룩
//////	BeginBatchDraw();
//////	int x1, y1, x2, y2;
//////	x1 = 800;
//////	y1 = 50;
//////	x2 = 1600;
//////	y2 = 550;
//////	while (true)
//////	{
//////		v += dv;								// ���ݼ��ٶȼ����ٶ�
//////		h -= (v - dv / 2);						// ����߶�
//////		x1 = x1 + (int)h;
//////		x2 = x2 + (int)h;
//////		setfillcolor(HSVtoRGB(H, S, L));
//////		bar(x1, y1, x2, y2);
//////		ShowIips();
//////		FlushBatchDraw();
//////		Sleep(20);
//////		if (x1 <= 0)
//////		{
//////			break;
//////		}
//////	}
//////	EndBatchDraw();
//////
//////	POS pos;
//////	pos.x = rand() % 730 + 35;
//////	pos.y = rand() % 430 + 85;
//////	pos.color = HSVtoRGB(H, S, L);
//////
//////	if (Grade == 0)
//////	{
//////		setfillcolor(HSVtoRGB(H, S, (L - 0.1f) < 0 ? L = L + 0.1f : L = L - 0.1f));
//////	}
//////	if (Grade == 1)
//////	{
//////		setfillcolor(HSVtoRGB(H, (S - 0.1f) < 0 ? S = S + 0.1f : S = S - 0.1f, L));
//////	}
//////	if (Grade >= 2)
//////	{
//////		setfillcolor(HSVtoRGB((H - 20) < 0 ? H = H + 20 : H = H - 20, S, L));
//////	}
//////
//////	bar(pos.x - 35, pos.y - 35, pos.x + 35, pos.y + 35);
//////	ShowIips();
//////	return pos;
//////}
//////
//////int GetNum(int Mark)
//////{
//////	int sum = 0;
//////	while (Mark)
//////	{
//////		sum++;
//////		Mark /= 10;
//////	}
//////	return sum == 0 ? sum = 1 : sum;
//////}
//////
//////void GameOver()
//////{
//////	settextstyle(60, 0, L"΢���ź�");
//////	RECT r = { 0, 0, 800, 600 };
//////	settextcolor(WHITE);
//////	drawtext(_T("��Ϸ����"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
//////	Sleep(1000);
//////}
//////
//////void AddMark(POS pos, int addMark)
//////{
//////	setfillcolor(WHITE);
//////	bar(pos.x - 35, pos.y - 35, pos.x + 35, pos.y + 35);
//////	setbkmode(TRANSPARENT);
//////	settextstyle(30, 0, L"΢���ź�");
//////	settextcolor(WHITE);
//////	TCHAR str[25];
//////	_stprintf_s(str, _T("+%d"), addMark);
//////	POS textpos;
//////	textpos.x = pos.x - 20;
//////	textpos.y = pos.y - 35 - 30;
//////	textpos.color = WHITE;
//////	outtextxy(textpos.x, textpos.y, str);
//////
//////	double k = textpos.y / (textpos.x - 700.0);
//////	double b = (700 * textpos.y) / (textpos.x - 700.0);
//////
//////	double h = 0;							// �߶�
//////	double v = 0;							// �ٶȣ��������£�
//////	double dv = 9.8 / 50;					// ���ٶȣ�ÿ 1/50 �룩
//////	BeginBatchDraw();
//////	while (true)
//////	{
//////		v += dv;							// ���ݼ��ٶȼ����ٶ�
//////		h -= (v - dv / 2);					// ����߶�
//////		pos.y = pos.y - (int)h;
//////		setfillcolor(WHITE);
//////		settextcolor(WHITE);
//////		bar(pos.x - 35, pos.y - 35, pos.x + 35, pos.y + 35);
//////		textpos.x = textpos.x - (int)h;
//////		textpos.y = (int)(k * textpos.x - b);
//////		outtextxy(textpos.x, textpos.y, str);
//////		FlushBatchDraw();
//////		Sleep(20);
//////		setfillcolor(pos.color);
//////		settextcolor(pos.color);
//////		outtextxy(textpos.x, textpos.y, str);
//////		bar(pos.x - 35, pos.y - 35, pos.x + 35, pos.y + 35);
//////		if (pos.y > 600 && textpos.x > 700)
//////		{
//////			break;
//////		}
//////	}
//////	EndBatchDraw();
//////}
//////
//////void ShowIips()
//////{
//////	setbkmode(TRANSPARENT);
//////	settextstyle(30, 0, L"΢���ź�");
//////	RECT r = { 0, 50, 800, 100 };
//////	settextcolor(RGB(252, 203, 147));
//////	drawtext(_T("�ҳ���ɫ��һ����С����"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
//////}
////#pragma warning(disable:4244)	// ������õ��������ض�����
////#include <cstdio>				// printf
////#include <cmath>				// cosf/sinf/sqrtf
////#include <utility>				// std::pair
////#include <algorithm>			// std::swap
////#include <graphics.h>			// ui
////
////// ��Ļ��С
////#define	WIDTH			1280	// ��
////#define	HEIGHT			720		// ��
////
////// ��ʾ����
////#define	ALL				0		// ȫ����ʾ
////#define C1C2			1		// ��ʾ C1 �� C2 ��
////#define NOC2			2		// ������ C2 ��
////#define	NOC1			3		// ������ C1 ��
////
////// �ĸ˻�������
////#define	INVALID			-1		// ��Ч����
////#define	CRANK_ROCKER	0		// ����ҡ�˻���
////#define	DOUBLE_CRANK	1		// ˫��������
////#define	ROCKER			2		// ҡ�˻���
////#define	ROCKER_CRANK	3		// ����ҡ�ˣ�ҡ��Ϊ������
////
////// �˳�����
////float AB = 45;
////float BC = 100;
////float CD = 70;
////float AD = 120;
////
////// �˶�����
////float t = 0;					// ʱ��
////float w = 0.00314159f;			// ���ٶ�
////float angle = w * t;			// �Ƕ�
////
////// ��ʾ����
////int draw = ALL;					// ȫ����ʾ
////
////// ������
////struct vec2 {
////	float x;					// x ����
////	float y;					// y ����
////	vec2(float a = 0, float b = 0) : x(a), y(b) {}
////
////	float length() const {
////		return sqrtf(x * x + y * y);
////	}
////
////	vec2 operator+(const vec2& b) {
////		return vec2(x + b.x, y + b.y);
////	}
////
////	vec2 operator-(const vec2& b) {
////		return vec2(x - b.x, y - b.y);
////	}
////
////	vec2 operator*(const float b) {
////		return vec2(x * b, y * b);
////	}
////};
////
////// Բ
////struct Circle {
////	union {
////		struct { float x, y; };		// Բ�ģ������ʾ
////		vec2 p;						// Բ�ģ�������ʾ
////	};
////	float r;						// �뾶
////	Circle(float x = 0, float y = 0, float radius = 0) : p(x, y), r(radius) {}
////	Circle(vec2 center, float radius) : p(center), r(radius) {}
////
////	// ��Բ��
////	std::pair<vec2, vec2> intersections(Circle& rhs) {
////		float d, a, h;
////		d = (p - rhs.p).length();
////		a = (r * r - rhs.r * rhs.r + d * d) / (2 * d);
////		h = sqrtf(r * r - a * a);
////		vec2 P2 = p + (rhs.p - p) * (a / d);
////		float x3, y3, x4, y4;
////		x3 = P2.x + h * (rhs.y - y) / d;
////		y3 = P2.y - h * (rhs.x - x) / d;
////		x4 = P2.x - h * (rhs.y - y) / d;
////		y4 = P2.y + h * (rhs.x - x) / d;
////
////		return std::pair<vec2, vec2>(vec2(x3, y3), vec2(x4, y4));
////	}
////};
////
////// �����ĸ˻�������
////int linksType(float AB, float AD, float BC, float CD) {
////	float minbar = fmin(AB, fmin(AD, fmin(BC, CD)));
////	float maxbar = fmax(AB, fmax(AD, fmax(BC, CD)));
////
////	// ��̸������֮��С�ڵ�����������֮�Ͳ���Ч
////	if ((minbar + maxbar) > ((AB + AD + BC + CD) / 2)) return INVALID;
////
////	// AB ��̣�����ҡ�˻���
////	if (fabs(AB - minbar) < 1e-6) {
////		printf("crank-rocker mechanism.\n");
////		return CRANK_ROCKER;
////	}
////	// AD ��̣�˫��������
////	if (fabs(AD - minbar) < 1e-6) {
////		printf("double-crank mechanism.\n");
////		return DOUBLE_CRANK;
////	}
////
////	// CD ��̣������� AB Ϊҡ�ˣ������� CD Ϊ����
////	if (fabs(CD - minbar) < 1e-6) {
////		printf("double-crank mechanism.\n");
////		return ROCKER_CRANK;
////	}
////
////	// ҡ�˻�����������
////	return ROCKER;
////}
////
////// ָ����ɫ��Բ
////inline void drawCircle(const Circle& crcl, COLORREF color) {
////	setlinecolor(color);
////	circle(crcl.x, crcl.y, crcl.r);
////}
////
////// ָ����ɫ����
////inline void drawLine(const vec2& p1, const vec2& p2, COLORREF color) {
////	setlinecolor(color);
////	line(p1.x, p1.y, p2.x, p2.y);
////}
////
////// �����ĸ˻�����AB ��������AD ���ܣ�BC ���ˣ�CD ������
////void drawMechanism(vec2 A, float AB, float AD, float BC, float CD) {
////	int type = linksType(AB, AD, BC, CD);
////	vec2 B;
////	vec2 D(A.x + AD, A.y);
////	Circle atB;
////	Circle atA(A, AB);
////	Circle atD(D, CD);
////
////	// ��Բ�������������
////	std::pair<vec2, vec2> C;
////	vec2& C1 = C.first;
////	vec2& C2 = C.second;
////
////	float cur;			// ��ǰʵ�ʽǶ�
////	int dir = 0;		// �Ƕ����������Ƿ����
////
////	// ��Ч���ͣ���ת����
////	if (INVALID == type) {
////		printf("invalid four-bar linkage!\n");
////		return;
////	}
////	else if (CRANK_ROCKER == type || DOUBLE_CRANK == type) {
////		cur = angle;
////	}
////	else {
////		float maxtheta, mintheta;					// �γɼ�λ�н�
////		if (ROCKER_CRANK == type) {					// ҡ��Ϊ������������Ϊ������
////			maxtheta = acosf((AB * AB + AD * AD - (BC + CD) * (BC + CD)) / (2 * AB * AD));
////			mintheta = acosf((AB * AB + AD * AD - (BC - CD) * (BC - CD)) / (2 * AB * AD));
////		}
////		else {										// ˫ҡ��
////			maxtheta = acosf((AB * AB + AD * AD - (BC + CD) * (BC + CD)) / (2 * AB * AD));
////			mintheta = acosf(((AB + BC) * (AB + BC) + AD * AD - CD * CD) / (2 * (AB + BC) * AD));
////		}
////
////		float dis = maxtheta - mintheta;			// ��λ�нǣ����������Χ
////
////		float count = angle / (2 * dis);			// һ������Ϊһ��ѭ�������������
////		cur = (count - (int)count) * (2 * dis);		// �������ض�ȡ��
////
////		cur += mintheta;							// ���ϳ�ʼƫ�Ƶó���ǰʵ��λ��
////		if (cur > maxtheta) {						// �������ֵ����
////			cur = maxtheta - (cur - maxtheta);
////			if (ROCKER_CRANK == type) dir = 1;
////		}
////	}
////
////
////	// �� B ��
////	B = A + vec2(cosf(cur), sinf(cur)) * AB;
////	atB = Circle(B, BC);
////	// �� C ��
////	C = atB.intersections(atD);
////	if (dir) std::swap(C.first, C.second);
////
////	// ��Բ
////	if (ALL == draw) {
////		drawCircle(atA, RED);
////		drawCircle(atD, GREEN);
////		drawCircle(atB, CYAN);
////	}
////
////	// ����
////	drawLine(A, B, RED);
////
////	if (NOC2 != draw) {
////		drawLine(B, C2, WHITE);
////		drawLine(C2, D, WHITE);
////		outtextxy(C2.x, C2.y, _T("C2"));
////	}
////
////	if (NOC1 != draw) {
////		drawLine(B, C1, MAGENTA);
////		drawLine(C1, D, MAGENTA);
////		outtextxy(C1.x, C1.y, _T("C1"));
////	}
////
////	// ���
////	outtextxy(A.x, A.y, _T("A"));
////	outtextxy(B.x, B.y, _T("B"));
////	outtextxy(D.x, D.y, _T("D"));
////}
////
////int main() {
////	initgraph(WIDTH, HEIGHT);
////	BeginBatchDraw();
////
////	ExMessage msg;
////	vec2 A(WIDTH / 4 - AD / 2, HEIGHT / 4);
////
////	while (1) {
////		cleardevice();
////
////		if (peekmessage(&msg, EM_MOUSE)) {
////			if (WM_LBUTTONDOWN == msg.message) {
////				draw = draw == NOC1 ? ALL : ++draw;
////			}
////		}
////
////		// ����ҡ�� I
////		drawMechanism(A, AB, AD, BC, CD);
////		// ˫����
////		drawMechanism(A + vec2(WIDTH / 2, 0), BC, AB, AD, CD);
////		// ����ҡ�� II
////		drawMechanism(A + vec2(0, HEIGHT / 2), CD, AD, BC, AB);
////		// ˫ҡ��
////		drawMechanism(A + vec2(WIDTH / 2, HEIGHT / 2), BC, CD, AB, AD);
////
////		t++;
////		angle = w * t;
////
////		FlushBatchDraw();
////	}
////
////	return 0;
////}
//#include<conio.h>
//#include<graphics.h>
//#include<math.h>
//#define PI acos(-1.0)
//double th = PI / 180;
//
//// ����б����Բ
//void DrawEllipse(int x0, int y0, int a, int b, int k, int color);
//// ��������
//void heart(int x0, int y0, int size, COLORREF C);
//
//int main()
//{
//	initgraph(640, 640);
//	setbkcolor(WHITE);
//	cleardevice();
//	// �����ߵĿ��
//	setlinestyle(PS_SOLID, 5);
//	setlinecolor(BLACK);
//	setfillcolor(RGB(238, 238, 238));
//	// �����
//	fillrectangle(175, 266, 190, 325);
//	fillrectangle(159, 281, 175, 315);
//	// �Ҷ���
//	fillrectangle(393, 268, 410, 324);
//	fillrectangle(410, 286, 423, 311);
//	fillellipse(187, 196, 397, 402);
//	setfillcolor(WHITE);
//	fillroundrect(288, 146, 302, 242, 10, 20);
//	// ���������۾�
//	DrawEllipse(243, 297, 38, 30, -30, BLACK);
//	DrawEllipse(350, 297, 38, 30, 30, BLACK);
//	setfillcolor(RGB(248, 245, 143));
//	floodfill(243, 297, BLACK);
//	floodfill(350, 297, BLACK);
//	line(296, 422, 249, 394);
//	line(296, 422, 336, 394);
//	setfillcolor(RGB(235, 110, 69));
//	floodfill(295, 410, BLACK);
//	setfillcolor(RGB(137, 211, 211));
//	fillcircle(294, 432, 10);
//	// ��������
//	arc(222, 399, 286, 591, 145.0 / 180 * PI, PI + 145.0 / 180 * PI);
//	arc(305, 413, 364, 591, PI + 35.0 / 180 * PI, 55.0 / 180 * PI);
//	line(224, 485, 359, 485);
//	line(224, 511, 278, 549);
//	line(278, 549, 312, 549);
//	line(312, 549, 360, 515);
//	setfillcolor(RGB(235, 110, 69));
//	floodfill(294, 517, BLACK);
//	setfillcolor(RGB(238, 238, 238));
//	floodfill(252, 554, BLACK);
//	floodfill(334, 559, BLACK);
//	// ������߸첲
//	arc(189, 387, 353, 647, 109.0 / 180 * PI, PI);
//	arc(189, 480, 223, 537, 10.0 / 180.0 * PI + PI, 0);
//	line(196, 471, 222, 491);
//	setfillcolor(RGB(235, 110, 69));
//	floodfill(207, 501, BLACK);
//	// �����Ҹ첲
//	arc(230, 319, 424, 455, 110.0 / 180 * PI + PI, 5.0 / 180 * PI);
//	arc(392, 360, 424, 395, -5.0 / 180 * PI, PI + PI / 2);
//	arc(310, 286, 402, 394, 70.0 / 180 * PI + PI, 150.0 / 180 * PI + PI);
//	line(372, 390, 394, 431);
//	setfillcolor(RGB(235, 110, 69));
//	floodfill(399, 402, BLACK);
//	// ��������ɫ
//	setfillcolor(RGB(238, 238, 238));
//	floodfill(296, 458, BLACK);
//	// ��������
//	line(463, 187, 422, 365);
//	heart(464, 67, 30, BLACK);
//	setfillcolor(RGB(235, 110, 69));
//	floodfill(464, 70, BLACK);
//	setfillcolor(RGB(255, 232, 201));
//	solidcircle(508, 70, 6);
//	_getch();
//	return 0;
//}
//
//void heart(int x0, int y0, int size, COLORREF C)
//{
//	double  m, n, x, y;
//	double i;
//	for (i = 0; i <= 2 * size; i = i + 0.01)
//	{
//		// �����������
//		m = i;
//		n = -size * (((sin(i) * sqrt(fabs(cos(i)))) / (sin(i) + 1.4142)) - 2 * sin(i) + 2);
//		// ת��Ϊ�ѿ�������
//		x = n * cos(m) + x0;
//		y = n * sin(m) + y0;
//		setfillcolor(C);
//		solidcircle((int)x, (int)y, 2);
//	}
//}
//
//void DrawEllipse(int x0, int y0, int a, int b, int k, int color)
//{
//	double i;
//	double x, y, tx, ty;
//	for (i = -180; i <= 180; i = i + 0.5)
//	{
//		x = a * cos(i * th);
//		y = b * sin(i * th);
//		tx = x;
//		ty = y;
//		x = tx * cos(k * th) - ty * sin(k * th) + x0;
//		y = y0 - (ty * cos(k * th) + tx * sin(k * th));
//		setfillcolor(color);
//		solidcircle((int)x, (int)y, 2);
//	}
//}
