#pragma once
#include "../../GUI/GUIBox.h"
#include <vector>
#include <string.h>
#include "../../Observable.h"

class MenuBar : public GUIBox  ///< class MenuBar
{
private:
	std::vector<std::shared_ptr <GUIBox> > buttonVect; ///< ������, ���������� ��� ������

	int buttonPosHelp=0; ///< ���������� �������� ������ ������������ ����������
	int buttonSizeHelp = 195; ///< ������ ������
	GUILayer * layer;
	friend class GUILayer;
	TextStyle *tstyle;///< ����� ������
	Text text; ///< �����
	RectangleShape * staticBar;///< �������� ��� ������
	float ratio;	///< ����������� ������� ����������� �������
protected:
	/// �����������
	MenuBar(RenderWindow* renderWindow_, float x, float y, float width, float height,
		std::string text, TextStyle *tstyle, GUIStyle *gstyle,
		float leftBorder, float rightBorder, Color staticBarColor, GUILayer* layer); 
	virtual void Draw() override;
public:
	void addButton(std::string name , void(*action)());///< ����� �������� ����� ������ �� ���� ����

	virtual void SetPosition(Vector2f position_) override;
	void SetPosition(Vector2f position_, Vector2f coefficient_) override;
	virtual void SetSize(Vector2f size_) override;
	void SetSize(Vector2f size_, Vector2f coefficient_) override;


	
};

