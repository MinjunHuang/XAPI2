﻿#pragma once

#ifndef _TDX_REQUEST_H_
#define _TDX_REQUEST_H_

//////////////////////////////////////////////////////////////////////////
// 股票部分

/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|140_证券代码|510_合约代码|113_操作标志|1217_备注|5250_客户群组|5251_
客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代
码|
===============
140_证券代码|141_证券名称|946_昨收价|945_今开价|948_国债利息|949_当前价|910_买一
价|911_买二价|912_买三价|913_买四价|914_买五价|900_买一量|901_买二量|902_买三量|
903_买四量|904_买五量|930_卖一价|931_卖二价|932_卖三价|933_卖四价|934_卖五价|920
_卖一量|921_卖二量|922_卖三量|923_卖四量|924_卖五量|100_交易所代码|187_最小交易
股数|226_最小买入变动价位|227_最小卖出变动价位|125_帐号类别|132_币种|958_国债标
识|1213_保留信息|
*/
#define REQUEST_HQ		102
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|132_
币种|113_操作标志|1228_模式|1299_功能版本|101_交易所名称|5250_客户群组|5251_客户
营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
132_币种|300_资金余额|301_可用资金|310_总资产|302_可取资金|121_资金帐号|1213_保
留信息|
*/
#define REQUEST_ZJYE	104		// 资金余额,信用与普通的区别是121_资金帐号不同
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|140_
证券代码|130_买卖标志|949_当前价|301_可用资金|166_委托方式|510_合约代码|513_开平
标志|514_投保标志|173_席位代码|242_对方席位代码|243_对方资金帐号|244_对方股东代
码|245_对方帐号类别|113_操作标志|299_对方分支代码|298_对方客户代码|158_对方密码|
705_买入价|706_卖出价|1223_检查风险标志|146_委托编号|1299_功能版本|142_委托日期|
397_产品标志|1227_参数|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|
5254_信用交易标识|5255_会话号|5256_客户代码|
===============
201_可卖数量|301_可用资金|1163_融资负债|1150_融资利息|1159_融资管理费|251_提示信
息1|1213_保留信息|
*/
#define REQUEST_110		110

/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|140_证券代码|113_操作标志|146_委托编号|510_合约代码|162_撤单数量|173_
席位代码|718_系统中心号|142_委托日期|130_买卖标志|514_投保标志|513_开平标志|144_
委托数量|145_委托价格|377_合同编号|135_资金密码|143_委托时间|151_成交时间|1227_
参数|516_成交属性|397_产品标志|101_交易所名称|5250_客户群组|5251_客户营业部|5252
_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
1213_保留信息|
*/
#define REQUEST_CD		200		// 撤单
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|130_
买卖标志|138_通讯密码|100_交易所代码|140_证券代码|145_委托价格|133_交易单位|144_
委托数量|166_委托方式|132_币种|148_委托金额|142_委托日期|143_委托时间|146_委托编
号|606_批次号|173_席位代码|510_合约代码|513_开平标志|514_投保标志|1223_检查风险
标志|326_分仓基量|135_资金密码|241_约定序号|242_对方席位代码|243_对方资金帐号|24
4_对方股东代码|245_对方帐号类别|516_成交属性|538_触发价格|299_对方分支代码|298_
对方客户代码|158_对方密码|485_推荐人代码|1264_令牌|106_联系人姓名|107_联系方式|3
97_产品标志|101_交易所名称|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CP
UID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
146_委托编号|1223_检查风险标志|149_返回信息|1213_保留信息|
*/
#define REQUEST_WT		202		// 委托
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|1207
_起始序号|126_开始日期|127_终止日期|1227_参数|101_交易所名称|5250_客户群组|5251_
客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代
码|
===============
143_委托时间|123_股东代码|140_证券代码|141_证券名称|130_买卖标志|131_买卖标志|10
0_交易所代码|145_委托价格|144_委托数量|153_成交价格|152_成交数量|162_撤单数量|14
6_委托编号|194_报价方式|147_状态说明|161_冻结资金|1213_保留信息|
*/
#define REQUEST_KCLB	1100	// 可撤列表
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|1207
_起始序号|1227_参数|101_交易所名称|5250_客户群组|5251_客户营业部|5252_硬盘序列号
|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
143_委托时间|123_股东代码|140_证券代码|141_证券名称|130_买卖标志|131_买卖标志|10
0_交易所代码|145_委托价格|144_委托数量|153_成交价格|152_成交数量|162_撤单数量|14
6_委托编号|194_报价方式|147_状态说明|161_冻结资金|1213_保留信息|
*/
#define REQUEST_DRWT	1102	// 当日委托
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|126_
开始日期|127_终止日期|1207_起始序号|140_证券代码|1227_参数|5250_客户群组|5251_客
户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|

===============
142_委托日期|123_股东代码|140_证券代码|141_证券名称|130_买卖标志|131_买卖标志|10
0_交易所代码|145_委托价格|144_委托数量|153_成交价格|152_成交数量|162_撤单数量|14
6_委托编号|194_报价方式|161_冻结资金|1213_保留信息|
*/
#define REQUEST_LSWT	1104	// 历史委托
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|1207
_起始序号|155_成交编号|101_交易所名称|5250_客户群组|5251_客户营业部|5252_硬盘序
列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
151_成交时间|123_股东代码|140_证券代码|141_证券名称|130_买卖标志|131_买卖标志|15
3_成交价格|152_成交数量|303_发生金额|155_成交编号|167_撤单标志|146_委托编号|1213
_保留信息|
*/
#define REQUEST_DRCJ	1108	// 当日成交
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|126_
开始日期|127_终止日期|1207_起始序号|140_证券代码|101_交易所名称|5250_客户群组|52
51_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户
代码|
===============
150_成交日期|151_成交时间|123_股东代码|140_证券代码|141_证券名称|130_买卖标志|13
1_买卖标志|153_成交价格|152_成交数量|303_发生金额|304_剩余金额|206_佣金|210_印花
税|207_过户费|208_成交费|155_成交编号|146_委托编号|1213_保留信息|
*/
#define REQUEST_LSCJ	1110	// 历史成交
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|1207
_起始序号|140_证券代码|113_操作标志|1228_模式|1299_功能版本|101_交易所名称|130_
买卖标志|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易
标识|5255_会话号|5256_客户代码|
===============
140_证券代码|141_证券名称|200_证券数量|201_可卖数量|202_摊簿成本价|949_当前价|20
5_最新市值|204_摊簿浮动盈亏|232_实现盈亏|230_参考盈亏比例(%)|160_冻结数量|123_股
东代码|100_交易所代码|101_交易所名称|1213_保留信息|
*/
#define REQUEST_GFLB	1114	// 股份列表，信用与普通的区别是121_资金帐号不同
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|113_
操作标志|299_对方分支代码|298_对方客户代码|243_对方资金帐号|158_对方密码|361_升
级版本标识|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交
易标识|5255_会话号|5256_客户代码|
===============
123_股东代码|124_股东名称|121_资金帐号|125_帐号类别|281_融资融券标识|1213_保留信
息|
*/
#define REQUEST_GDLB	1122	// 股东列表
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|130_
买卖标志|140_证券代码|510_合约代码|959_证券信息有效标志|1223_检查风险标志|1299_
功能版本|397_产品标志|241_约定序号|166_委托方式|101_交易所名称|5250_客户群组|525
1_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户
代码|
===============
141_证券名称|960_证券类别|301_可用资金|211_最大可买|166_委托方式|149_返回信息|37
0_融券数量|1166_可用信用额度|1173_可用保证金|127_终止日期|1227_参数|1223_检查风
险标志|251_提示信息1|252_提示信息2|397_产品标志|291_字段代码|125_帐号类别|145_委
托价格|241_约定序号|201_可卖数量|144_委托数量|1213_保留信息|
*/
#define REQUEST_1124	1124	// 
//////////////////////////////////////////////////////////////////////////
// 期权部分
/*

*/
#define REQUEST_WT_QQ	1294	// 备兑券锁定/解锁/撤单
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|234_类型|140_证券代码|391_产品代码|510_合约代码|1207_起
始序号|1227_参数|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|5254_
信用交易标识|5255_会话号|5256_客户代码|
===============
510_合约代码|391_产品代码|511_合约名称|140_证券代码|141_证券名称|333_方案类型|56
83_期权类型|5672_行权价格|541_保证金|5741_首个交易日|5808_到期日期|5743_最后交易
日期|540_交割月份|1231_显示颜色|100_交易所代码|1213_保留信息|
*/
#define REQUEST_QQDMCX_QQ	1296	// 期权代码查询
/*

*/
#define REQUEST_KSDS_QQ		1300	// 可锁定数		125=37好像是期权?
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|132_币种|1217_备注|5250_客户群组|5251_客户营业部|5252_硬
盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
121_资金帐号|132_币种|541_保证金|700_风险度|300_资金余额|301_可用资金|205_最新市
值|350_总资产|302_可取资金|1213_保留信息|
*/
#define REQUEST_ZJCX_QQ		1302	// 资金查询
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|1217_备注|1207_起始序号|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5
253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
140_证券代码|141_证券名称|200_证券数量|5689_合约冻结数量|201_可卖数量|521_持仓量
|5706_累计盈亏|5734_红利金额|5735_配股金额|1213_保留信息|
*/
#define REQUEST_KSDQCX_QQ	1304	// 可锁定券查询	备兑券锁定
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|1217_备注|1207_起始序号|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5
253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
140_证券代码|141_证券名称|200_证券数量|521_持仓量|1213_保留信息|
*/
#define REQUEST_KJSQCX_QQ	1306	// 可解锁券查询	备兑券解锁
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|606_批次号|113_操作标志|1217_备注|1207_起始序号|5250_客户群组|5251_客户
营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
142_委托日期|143_委托时间|146_委托编号|140_证券代码|141_证券名称|510_合约代码|51
1_合约名称|333_方案类型|5683_期权类型|100_交易所代码|131_买卖标志|719_开平标志|5
685_备兑标记|5705_订单类型|5740_申报结果|145_委托价格|144_委托数量|541_保证金|15
2_成交数量|154_成交金额|162_撤单数量|123_股东代码|1227_参数|1213_保留信息|
*/
#define REQUEST_DRWTCX_QQ	1308	// 当日委托查询
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|606_批次号|113_操作标志|1217_备注|1207_起始序号|5250_客户群组|5251_客户
营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
142_委托日期|143_委托时间|146_委托编号|510_合约代码|511_合约名称|140_证券代码|14
1_证券名称|333_方案类型|5683_期权类型|131_买卖标志|719_开平标志|5685_备兑标记|16
6_委托方式|145_委托价格|144_委托数量|541_保证金|606_批次号|162_撤单数量|123_股东
代码|1227_参数|1213_保留信息|
*/
#define REQUEST_KCLBCX_QQ	1310	// 可撤列表查询
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|606_批次号|113_操作标志|1217_备注|1207_起始序号|5250_客户群组|5251_客户
营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
155_成交编号|146_委托编号|120_客户号|122_客户名称|123_股东代码|510_合约代码|511_
合约名称|1231_显示颜色|5683_期权类型|131_买卖标志|719_开平标志|5685_备兑标记|100
_交易所代码|151_成交时间|152_成交数量|153_成交价格|154_成交金额|206_佣金|541_保
证金|1213_保留信息|
*/
#define REQUEST_DRCJCX_QQ	1312	// 当日成交查询
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|606_批次号|113_操作标志|126_开始日期|127_终止日期|1217_备注|1207_起始序
号|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|52
55_会话号|5256_客户代码|
===============
5700_交易日期|146_委托编号|120_客户号|122_客户名称|142_委托日期|143_委托时间|140
_证券代码|141_证券名称|510_合约代码|511_合约名称|1231_显示颜色|5683_期权类型|100
_交易所代码|131_买卖标志|719_开平标志|5685_备兑标记|5705_订单类型|5740_申报结果|
145_委托价格|144_委托数量|541_保证金|152_成交数量|154_成交金额|162_撤单数量|1213
_保留信息|
*/
#define REQUEST_LSWTCX_QQ	1314	// 历史委托查询
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|606_批次号|113_操作标志|126_开始日期|127_终止日期|1217_备注|1207_起始序
号|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|52
55_会话号|5256_客户代码|
===============
146_委托编号|155_成交编号|120_客户号|122_客户名称|123_股东代码|510_合约代码|511_
合约名称|1231_显示颜色|5683_期权类型|131_买卖标志|719_开平标志|5685_备兑标记|101
_交易所名称|150_成交日期|151_成交时间|152_成交数量|153_成交价格|154_成交金额|206
_佣金|5745_实收金额|1213_保留信息|
*/
#define REQUEST_LSCJCX_QQ	1316	// 历史成交查询
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|140_证券代码|391_产品代码|510_合约代码|146_委托编号|759_
合约编号|606_批次号|173_席位代码|113_操作标志|126_开始日期|127_终止日期|130_买卖
标志|1217_备注|1207_起始序号|5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_
CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
510_合约代码|511_合约名称|391_产品代码|333_方案类型|5683_期权类型|660_报价方式|5
684_持仓方向|662_使用库存标记|5685_备兑标记|5666_当日平仓成交数量|5667_当日开仓
成交金额|5668_当日平仓成交金额|5669_当日开仓成交数量|5670_当日平仓委托数量|5671_
当日开仓委托数量|5698_合约市值|541_保证金|522_开仓日期|5808_到期日期|5769_剩余天
数|756_历史开可用|5689_合约冻结数量|521_持仓量|200_证券数量|5707_平仓数量|5708_
开仓数量|528_持仓均价|330_摊薄浮动盈亏|328_摊薄成本价|329_摊薄保本价|5709_平仓金
额|5710_开仓金额|205_最新市值|203_最新价|123_股东代码|100_交易所代码|1213_保留信
息|
*/
#define REQUEST_CYXYCX_QQ	1320	// 可用合约查询


#define REQUEST_WT_HGT		1450	// 委托，沪港通

//////////////////////////////////////////////////////////////////////////
// 登录部分

/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|100_
交易所代码|294_附加账号|1217_备注|5250_客户群组|5251_客户营业部|5252_硬盘序列号|
5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
120_客户号|122_客户名称|123_股东代码|100_交易所代码|5673_子账户编号|
5674_结算机构|5675_结算账号|132_币种|238_帐户状态|
5676_登记日期|173_席位代码|1213_保留信息|
*/
#define REQUEST_1318		1318
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|234_
类型|113_操作标志|736_信息类型|1217_备注|1227_参数|5250_客户群组|5251_客户营业部
|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
1223_检查风险标志|181_风险标志|182_风险说明|450_开户类别|474_指定标志|122_客户名
称|1227_参数|149_返回信息|142_委托日期|157_合法标志|250_提示信息0|123_股东代码|1
25_帐号类别|251_提示信息1|252_提示信息2|253_提示信息3|254_提示信息4|255_交易征费
|256_交易费|257_交易系统使用费|258_股份交收费|259_汇率|1213_保留信息|
*/
#define REQUEST_140		140
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|1207
_起始序号|736_信息类型|1227_参数|234_类型|1217_备注|5250_客户群组|5251_客户营业
部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话号|5256_客户代码|
===============
149_返回信息|1213_保留信息|
*/
#define REQUEST_322		322

//////////////////////////////////////////////////////////////////////////
// 登录时查询时推出来的请求ID，直接就返回过来了,
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|1206_客户类别|121
0_认证方式|1211_认证信息|122_客户名称|454_证件号码|455_移动电话|128_用户联系方式
|129_用户EMAIL|188_上海股东|189_深圳股东|138_通讯密码|1117_银行代码|1118_银行营
业部|1119_银行股东代码登录市场|1234_柜台类别|1214_断线重联标志|1230_查询模式|121
6_VIP标志|1235_机器信息|1243_受限模式|1248_SESSION信息|1257_重定向标志|1258_重定
向信息|1292_手机机器信息|1297_登录输入参数|1244_机器特征码|1300_客户端内部版本|1
301_版本字符串|
===============
120_客户号|122_客户名称|125_帐号类别|411_开放式基金标识|110_委托方式|1212_营业部
ID|1218_客户权限|149_返回信息|220_客户权限代码|221_客户权限名称|1223_检查风险标
志|450_开户类别|1224_非交易帐号标志|281_融资融券标识|1291_登录返回参数|251_提示
信息1|1210_认证方式|1204_MAC地址|1229_描述|1248_SESSION信息|295_信用交易提示信息
|275_个股期权交易标志|276_OTC交易标志|273_港股通交易标志|250_提示信息0|252_提示
信息2|1217_备注|1213_保留信息|
*/
#define RESPONSE_101	101
#define REQUEST_100		100
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|1117
_银行代码|1118_银行营业部|1119_银行股东代码登录市场|1234_柜台类别|138_通讯密码|1
230_查询模式|102_营业部代码|1235_机器信息|1244_机器特征码|1292_手机机器信息|
===============
5250_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_
会话号|5256_客户代码|1213_保留信息|
*/
#define RESPONSE_113	113
#define REQUEST_112		112
/*
120_客户号|134_交易密码|121_资金帐号|125_帐号类别|123_股东代码|110_委托方式|5250
_客户群组|5251_客户营业部|5252_硬盘序列号|5253_CPUID|5254_信用交易标识|5255_会话
号|5256_客户代码|
===============
120_客户号|281_融资融券标识|411_开放式基金标识|110_委托方式|1213_保留信息|
*/
#define RESPONSE_149	149
#define REQUEST_148		148
/*

*/
#define REQUEST_1122	REQUEST_GDLB	//(1123-1)
#endif

/*
全部请求号，与对应的字段数，最大是50，所以约定每行为64

100,33
101,28
102,18
103,34
104,18
105,7
106,19
107,2
108,16
109,1
110,38
111,7
112,16
113,8
118,17
119,3
122,19
123,3
132,20
133,2
134,21
135,3
136,20
137,6
138,18
139,14
140,18
141,23
148,13
149,5
150,25
151,9
152,15
153,7
156,22
157,3
158,18
159,13
160,17
161,8
162,17
163,12
164,17
165,8
166,13
167,3
168,16
169,1
170,23
171,4
172,9
173,6
174,10
175,6
200,35
201,1
202,50
203,4
204,17
205,2
250,15
251,7
252,14
253,16
254,14
255,18
256,16
257,12
302,16
303,9
304,17
305,5
316,9
317,13
322,18
323,2
324,18
325,18
326,17
327,2
328,22
329,3
330,18
331,9
332,20
333,11
344,15
345,8
368,16
369,9
500,30
501,50
502,17
503,15
504,17
505,7
506,17
507,17
508,17
509,16
510,17
511,11
512,20
513,1
514,19
515,1
516,19
517,1
518,19
519,1
520,20
521,1
522,19
523,15
524,20
525,18
530,17
531,1
532,17
533,1
534,19
535,1
536,17
537,1
538,19
539,1
540,17
541,1
542,17
543,1
544,17
545,1
546,17
547,1
548,19
549,1
550,19
551,1
580,15
581,7
900,40
901,2
902,21
903,11
904,21
905,2
908,13
909,3
922,20
923,10
944,16
945,11
1100,18
1101,17
1102,16
1103,17
1104,18
1105,16
1108,16
1109,13
1110,18
1111,18
1114,20
1115,15
1116,16
1117,7
1118,17
1119,9
1120,17
1121,18
1122,19
1123,6
1124,23
1125,22
1126,18
1127,6
1128,20
1129,1
1130,38
1131,14
1132,17
1133,14
1136,18
1137,5
1138,14
1139,11
1142,15
1143,2
1154,15
1155,3
1156,16
1157,11
1160,16
1161,14
1162,16
1163,2
1164,21
1165,2
1166,21
1167,2
1170,19
1171,2
1172,15
1173,1
1174,14
1175,1
1176,15
1177,11
1182,13
1183,6
1184,16
1185,1
1192,17
1193,13
1196,15
1197,12
1198,15
1199,12
1200,15
1201,16
1202,17
1203,15
1204,15
1205,12
1206,17
1207,17
1208,15
1209,15
1214,14
1215,19
1216,14
1217,19
1222,19
1223,6
1224,14
1225,13
1226,16
1227,11
1234,17
1235,9
1240,14
1241,6
1294,44
1295,5
1296,21
1297,16
1300,39
1301,31
1302,17
1303,10
1304,22
1305,10
1306,22
1307,5
1308,24
1309,24
1310,24
1311,21
1312,24
1313,20
1314,26
1315,25
1316,26
1317,21
1318,16
1319,12
1320,28
1321,37
1322,23
1323,10
1330,28
1331,1
1332,20
1333,15
1334,21
1335,31
1336,23
1337,11
1340,15
1341,7
1346,20
1347,12
1350,20
1351,8
1448,16
1449,5
1450,33
1451,3
1452,30
1453,18
1454,22
1455,1
1456,22
1457,7
1458,23
1459,18
1460,24
1461,17
1462,26
1463,19
1464,26
1465,16
1466,26
1467,20
1468,26
1469,21
1470,21
1471,10
1472,20
1473,1
1474,20
1475,1
1476,20
1477,21
1478,19
1479,1
1480,17
1481,1
1482,17
1483,10
1484,18
1485,8
1486,20
1487,16
1488,19
1489,16
1490,20
1491,18
1492,19
1493,18
1494,18
1495,1
1496,18
1497,1
1498,19
1499,10
1508,15
1509,8
1516,6
1517,4
1800,31
1801,2
1802,17
1803,14
1804,20
1805,23
1806,17
1807,8
1808,17
1809,16
1812,15
1813,7
1816,17
1817,24
1818,20
1819,8
1820,21
1821,17
1822,16
1823,8
1826,27
1827,6
2002,30
2003,2
2004,16
2005,14
2006,16
2007,14
2008,15
2009,7
2010,18
2011,11
2012,15
2013,14
2014,16
2015,16
2016,14
2017,12
2018,17
2019,15
2020,16
2021,17
2022,16
2023,12
2024,15
2025,15
2028,15
2029,15
2030,15
2031,13
2032,17
2033,12
2034,16
2035,12
2040,18
2041,13
2042,14
2043,9
2046,14
2047,12
2050,18
2051,8
2052,15
2053,15
2100,37
2101,4
2102,25
2103,2
2104,24
2105,4
2106,18
2107,14
2108,20
2109,13
2110,21
2111,19
2112,20
2113,7
2114,21
2115,2
2116,18
2117,20
2118,50
2119,24
2122,30
2123,10
2124,19
2125,3
2126,18
2127,7
2128,20
2129,14
2130,35
2131,4
2132,29
2133,1
2134,17
2135,17
2136,17
2137,14
2138,16
2139,3
2144,19
2145,3
2156,22
2157,2
2158,18
2159,7
2160,20
2161,14
2200,19
2201,11
2202,21
2203,11
2204,20
2205,7
2206,22
2207,11
2208,20
2209,19
2210,19
2211,7
2216,18
2217,13
2218,20
2219,15
2220,21
2221,3
2222,20
2223,3
2224,18
2225,3
2226,18
2227,9
2230,27
2231,4
2232,19
2233,3
2236,20
2237,2
2238,17
2239,9
2242,21
2243,7
2248,20
2249,8
2256,18
2257,9
2258,18
2259,7
2260,20
2261,11
2262,18
2263,5
2264,20
2265,11
2320,18
2321,5
3000,22
3001,2
3002,21
3003,6
3004,15
3005,10
3006,20
3007,1
3028,15
3029,10
3200,17
3201,9
3202,17
3203,8
3204,19
3205,30
3206,19
3207,30
3208,17
3209,6
3210,15
3211,30
3212,15
3213,7
3214,14
3215,26
3216,17
3217,10
3218,14
3219,20
3220,18
3221,6
3222,14
3223,17
3224,14
3225,18
3226,17
3227,5
3228,18
3229,1
3230,18
3231,1
3232,19
3233,7
3234,14
3235,16
3236,14
3237,1
3238,14
3239,16
3240,18
3241,7
3242,17
3243,9
3244,17
3245,1
3246,15
3247,16
3248,14
3249,17
3250,14
3251,1
3252,14
3253,1
3254,14
3255,1
3256,14
3257,1
3258,14
3259,1
3260,16
3261,1
3264,16
3265,12
3272,16
3273,9
3274,17
3275,16
3276,18
3277,15
3286,16
3287,14
3288,14
3289,30
3292,23
3293,11
3294,16
3295,5
5010,11
5011,8
*/