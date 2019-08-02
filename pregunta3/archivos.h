#ifndef ARCHIVOS_H
#define ARCHIVOS_H

bool existeArchivo(char *ruta)
{
	bool result = false;
	File *archivo;
	archivo = fopen(ruta,"rb");
	if(archivo!=NULL)
	{
		result = true;
		fclose(archivo);
	}
	return result;
}

#endif //ARCHIVOS_H
