# Created by: nox@FreeBSD.org
# $FreeBSD$

PORTNAME=	uartlirc
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	comms
MASTER_SITES=	LOCAL/nox \
		http://people.freebsd.org/~nox/tmp/
DISTNAME=	${PORTNAME}-preliminary-003
EXTRACT_SUFX=	.shar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Driver for "homebrew" serial LIRC receivers

BROKEN_armv6=		fails to compile: implicit declaration of function 'cp15_pmccntr_get' is invalid in C99
BROKEN_powerpc64=	fails to compile: uart.h: No such file or directory
BROKEN_powerpc64le=	fails to compile: uart.h: No such file or directory
BROKEN_sparc64=		fails to build

USES=		kmod

WRKSRC=		${WRKDIR}/${PORTNAME}
EXTRACT_CMD=	${SH}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=

PLIST_FILES+=	${KMODDIR}/${PORTNAME}.ko

CFLAGS+=	${DEBUG_FLAGS}

do-install:
	${INSTALL} ${WRKSRC}/${PORTNAME}.ko ${STAGEDIR}${KMODDIR}

.include <bsd.port.mk>
