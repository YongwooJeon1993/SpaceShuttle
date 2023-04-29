//=============================================================================
//
// �o���b�g���� [enemybullet.h]
// Author : GP11B132 21 �K�E�C
//
//=============================================================================
#pragma once

#include "main.h"
#include "renderer.h"
#include "sprite.h"

//*****************************************************************************
// �}�N����`
//*****************************************************************************
#define ENEMYBULLET_MAX		(500)		// �o���b�g��Max��
#define ENEMYBULLET_SPEED	(10.0f)		// �o���b�g�̈ړ��X�s�[�h


// �o���b�g�\����
struct ENEMYBULLET
{
	BOOL				use;				// true:�g���Ă���  false:���g�p
	float				w, h;				// ���ƍ���
	XMFLOAT3			pos;				// �o���b�g�̍��W
	XMFLOAT3			rot;				// �o���b�g�̉�]��
	XMFLOAT3			move;				// �o���b�g�̈ړ���
	int					countAnim;			// �A�j���[�V�����J�E���g
	int					patternAnim;		// �A�j���[�V�����p�^�[���i���o�[
	int					texNo;				// ���Ԗڂ̃e�N�X�`���[���g�p����̂�

};


//*****************************************************************************
// �v���g�^�C�v�錾
//*****************************************************************************
HRESULT InitEnemyBullet(void);
void UninitEnemyBullet(void);
void UpdateEnemyBullet(void);
void DrawEnemyBullet(void);

ENEMYBULLET* GetEnemyBullet(void);
void SetEnemyBullet(XMFLOAT3 pos);


