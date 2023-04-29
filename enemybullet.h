//=============================================================================
//
// バレット処理 [enemybullet.h]
// Author : GP11B132 21 銭勇佑
//
//=============================================================================
#pragma once

#include "main.h"
#include "renderer.h"
#include "sprite.h"

//*****************************************************************************
// マクロ定義
//*****************************************************************************
#define ENEMYBULLET_MAX		(500)		// バレットのMax数
#define ENEMYBULLET_SPEED	(10.0f)		// バレットの移動スピード


// バレット構造体
struct ENEMYBULLET
{
	BOOL				use;				// true:使っている  false:未使用
	float				w, h;				// 幅と高さ
	XMFLOAT3			pos;				// バレットの座標
	XMFLOAT3			rot;				// バレットの回転量
	XMFLOAT3			move;				// バレットの移動量
	int					countAnim;			// アニメーションカウント
	int					patternAnim;		// アニメーションパターンナンバー
	int					texNo;				// 何番目のテクスチャーを使用するのか

};


//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
HRESULT InitEnemyBullet(void);
void UninitEnemyBullet(void);
void UpdateEnemyBullet(void);
void DrawEnemyBullet(void);

ENEMYBULLET* GetEnemyBullet(void);
void SetEnemyBullet(XMFLOAT3 pos);


