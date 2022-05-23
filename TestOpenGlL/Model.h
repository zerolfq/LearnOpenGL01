#pragma once
#include "Mesh.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

class Model
{
public:
	/*  函数   */
	Model(char* path);
	void Draw(Shader shader);
private:
	/*  模型数据  */
	vector<Mesh> meshes;
	string directory; // 存放模型地址的路径
	vector<Texture> textures_loaded;
	/*  函数   */
	void loadModel(string path);
	void processNode(aiNode* node, const aiScene* scene);
	Mesh processMesh(aiMesh* mesh, const aiScene* scene);
	vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type,
		string typeName);
};