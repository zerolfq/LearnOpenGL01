#pragma once
#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>; // ����glad����ȡ���еı���OpenGLͷ�ļ�

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>


class Shader
{
public:
	// ����ID
	unsigned int ID;

	// ��������ȡ��������ɫ��
	Shader(const char* vertexPath, const char* fragmentPath);
	// ʹ��/�������
	void use();
	// uniform���ߺ���
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void setMat4fv(const std::string& name,glm::mat4 value);
private:
	void checkCompileErrors(unsigned int shader, std::string type);
};

#endif