//=============================================================================
//
// BG処理 [bg.h]
// Author : GP11B132 21 銭勇佑
//
//=============================================================================
#pragma once

#include "main.h"
#include "renderer.h"
#include "debugproc.h"
#include "sprite.h"

//*****************************************************************************
// マクロ定義
//*****************************************************************************
struct TEXT
{
	XMFLOAT3	pos;		// ポリゴンの座標
	float		w, h;		// 幅と高さ
	int			texNo;		// 使用しているテクスチャ番号
	float		scrl;		// スクロール
};

//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
HRESULT InitTEXT(void);
void UninitTEXT(void);
void UpdateTEXT(void);
void DrawTEXT(void);

TEXT* GetTEXT(void);



