/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief ������ʱ�����̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. ������ʱ������ 100ms �������жϣ������ж�ʱ��ӡ������Ϣ��
 *
 * \note
 *    1. ���Ա� Demo ������ am_prj_config.h �ڽ� AM_CFG_SOFTIMER_ENABLE ����Ϊ 1��
 *       ���ú��Ѿ�Ĭ������Ϊ 1�� �û������ٴ����ã�
 *
 * \par Դ����
 * \snippet demo_am116_core_std_softimer.c src_am116_core_std_softimer
 *
 * \internal
 * \par Modification history
 * - 1.00 17-04-27  nwt, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_am116_core_std_softimer
 * \copydoc demo_am116_core_std_softimer.c
 */

/** [src_am116_core_std_softimer] */
#include "ametal.h"
#include "am_vdebug.h"
#include "demo_std_entries.h"

/**
 * \brief �������
 */
void demo_am116_core_std_softimer_entry (void)
{
    AM_DBG_INFO("demo am116_core std softimer!\r\n");

    demo_std_softimer_entry();
}
/** [src_am116_core_std_softimer] */

/* end of file */