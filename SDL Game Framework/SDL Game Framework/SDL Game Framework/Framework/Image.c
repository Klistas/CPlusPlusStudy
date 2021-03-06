#include "stdafx.h"
#include "Image.h"
#include "App.h"
#include "Input.h"
bool Image_Init(void)
{
	int32 imageFlag = IMG_INIT_PNG | IMG_INIT_JPG;
	int32 imageLibResult = IMG_Init(imageFlag);
	if (imageFlag != (imageFlag & imageLibResult))
	{
		return false;
	}

	return true;
}

void Image_Cleanup(void)
{
	IMG_Quit();
}

void Image_LoadImage(Image* image, const char* filename)
{
	LogInfo("Image Loading... %s", filename);
	
	static char path[MAX_PATH];

	sprintf_s(path, sizeof(path), "%s/%s", IMAGE_DIRECTORY, filename);
	image->Texture = IMG_LoadTexture(g_App.Renderer, path);
	SDL_QueryTexture(image->Texture, NULL, NULL, &image->Width, &image->Height);
	image->ScaleX = image->ScaleY = 1.0f;

	SDL_SetTextureBlendMode(image->Texture, SDL_BLENDMODE_BLEND);
}

void Image_SetAlphaValue(Image* image, uint8 alpha)
{
	SDL_SetTextureAlphaMod(image->Texture, alpha);
}

#define IMAGE_COUNT 4
void Image_Choice(const Image* image, int32 Count)
{
	for (int32 i = 0; i <= IMAGE_COUNT; i++)
	{
		
		Image_SetAlphaValue(image, 50);
		if (Count == i)
		{
			Image_SetAlphaValue(image, 200);
		}

		Renderer_DrawImage(image[i], (i * 350) + 50, 300);

	}

}


void Image_FadeIn(Image* image, int32 Alpha, int32 AlphaMin, int32 AlphaMax)
{
	if (AlphaMax <= 255, AlphaMin >= 0)
		Alpha = Clamp(AlphaMin, Alpha + 1, AlphaMax);
	Image_SetAlphaValue(image, Alpha);

}
