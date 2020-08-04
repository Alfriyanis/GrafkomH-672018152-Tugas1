#pragma once

int JumlahVertex = 512, Tampilan = 718;
float nx, ny, nz, bx, by, bz, tx, ty, tz;
int nomor;

struct uv {		// buat load texturenya
	float u, v;
};

struct pos {
	float x, y, z;
};

struct urutan {
	int u1, u2, u3;
};


pos* _pos = new pos[JumlahVertex];
uv* _uv = new uv[JumlahVertex];
urutan* _urut = new urutan[Tampilan];




int Load(const char* model) {
	FILE* f;
	fopen_s(&f, model, "r");
	if (!f) {
		printf("Gagal Membuka File");
		return 0;
	}
	fscanf_s(f, "NrVertices:%d", &JumlahVertex);
	for (int i = 0; i < JumlahVertex; i++) {
		fscanf_s(f, "   %d. pos:[%f, %f, %f]; norm:[%f, %f, %f]; binorm:[%f, %f, %f]; tgt:[%f, %f, %f]; uv:[%f, %f];",
			&nomor, &_pos[i].x, &_pos[i].y, &_pos[i].z, &nx, &ny, &nz, &bx, &by, &bz, &tx, &ty, &tz, &_uv[i].u, &_uv[i].v);
		std::cout << _pos[i].x << " : " << _pos[i].y << " : " << _pos[i].z << " : " << _uv[i].u << " : " << _uv[i].v << std::endl;
	}

	fscanf_s(f, "\nNrIndices:%d", &Tampilan);
	for (int i = 0; i < (int)Tampilan / 3; i++) {
		fscanf_s(f, "   %d.    %d,    %d,    %d", &nomor, &_urut[i].u1, &_urut[i].u2, &_urut[i].u3);
		std::cout << nomor << " : " << _urut[i].u1 << " : " << _urut[i].u2 << " : " << _urut[i].u3 << std::endl;
	}


}
