/*
  Copyright (c) 2010-2011 Gluster, Inc. <http://www.gluster.com>
  This file is part of GlusterFS.

  GlusterFS is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published
  by the Free Software Foundation; either version 3 of the License,
  or (at your option) any later version.

  GlusterFS is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see
  <http://www.gnu.org/licenses/>.
*/


/*
 * Most content of this file is generated using rpcgen. There are very few
 * additions done to this file (changes can be seen by doing
 * 'rpcgen glusterfs3.x' and taking a diff of this file with rpcgen
 * generated file.
 */

#ifndef _GLUSTERFS3_H_RPCGEN
#define _GLUSTERFS3_H_RPCGEN

//#include <rpc/rpc.h>
#include "xdr-common.h"

#ifdef __cplusplus
extern "C" {
#endif


struct gf_statfs {
	u_quad_t bsize;
	u_quad_t frsize;
	u_quad_t blocks;
	u_quad_t bfree;
	u_quad_t bavail;
	u_quad_t files;
	u_quad_t ffree;
	u_quad_t favail;
	u_quad_t fsid;
	u_quad_t flag;
	u_quad_t namemax;
};
typedef struct gf_statfs gf_statfs;

struct gf_proto_flock {
	u_int type;
	u_int whence;
	u_quad_t start;
	u_quad_t len;
	u_int pid;
	u_quad_t owner;
};
typedef struct gf_proto_flock gf_proto_flock;

struct gf_iatt {
	char ia_gfid[16];
	u_quad_t ia_ino;
	u_quad_t ia_dev;
	u_int mode;
	u_int ia_nlink;
	u_int ia_uid;
	u_int ia_gid;
	u_quad_t ia_rdev;
	u_quad_t ia_size;
	u_int ia_blksize;
	u_quad_t ia_blocks;
	u_int ia_atime;
	u_int ia_atime_nsec;
	u_int ia_mtime;
	u_int ia_mtime_nsec;
	u_int ia_ctime;
	u_int ia_ctime_nsec;
};
typedef struct gf_iatt gf_iatt;

/* Gluster FS Payload structures */
struct gfs3_stat_req {
	char gfid[16];
	char *path;
};
typedef struct gfs3_stat_req gfs3_stat_req;

struct gfs3_stat_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
};
typedef struct gfs3_stat_rsp gfs3_stat_rsp;

struct gfs3_readlink_req {
	char gfid[16];
	u_int size;
	char *path;
};
typedef struct gfs3_readlink_req gfs3_readlink_req;

struct gfs3_readlink_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt buf;
	char *path;
};
typedef struct gfs3_readlink_rsp gfs3_readlink_rsp;

struct gfs3_mknod_req {
	char pargfid[16];
	u_quad_t dev;
	u_int mode;
	char *path;
	char *bname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_mknod_req gfs3_mknod_req;

struct gfs3_mknod_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	struct gf_iatt preparent;
	struct gf_iatt postparent;
};
typedef struct gfs3_mknod_rsp gfs3_mknod_rsp;

struct gfs3_mkdir_req {
	char pargfid[16];
	u_int mode;
	char *path;
	char *bname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_mkdir_req gfs3_mkdir_req;

struct gfs3_mkdir_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	struct gf_iatt preparent;
	struct gf_iatt postparent;
};
typedef struct gfs3_mkdir_rsp gfs3_mkdir_rsp;

struct gfs3_unlink_req {
	char pargfid[16];
	char *path;
	char *bname;
};
typedef struct gfs3_unlink_req gfs3_unlink_req;

struct gfs3_unlink_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt preparent;
	struct gf_iatt postparent;
};
typedef struct gfs3_unlink_rsp gfs3_unlink_rsp;

struct gfs3_rmdir_req {
	char pargfid[16];
	int flags;
	char *path;
	char *bname;
};
typedef struct gfs3_rmdir_req gfs3_rmdir_req;

struct gfs3_rmdir_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt preparent;
	struct gf_iatt postparent;
};
typedef struct gfs3_rmdir_rsp gfs3_rmdir_rsp;

struct gfs3_symlink_req {
	char pargfid[16];
	char *path;
	char *bname;
	char *linkname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_symlink_req gfs3_symlink_req;

struct gfs3_symlink_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	struct gf_iatt preparent;
	struct gf_iatt postparent;
};
typedef struct gfs3_symlink_rsp gfs3_symlink_rsp;

struct gfs3_rename_req {
	char oldgfid[16];
	char newgfid[16];
	char *oldpath;
	char *oldbname;
	char *newpath;
	char *newbname;
};
typedef struct gfs3_rename_req gfs3_rename_req;

struct gfs3_rename_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	struct gf_iatt preoldparent;
	struct gf_iatt postoldparent;
	struct gf_iatt prenewparent;
	struct gf_iatt postnewparent;
};
typedef struct gfs3_rename_rsp gfs3_rename_rsp;

struct gfs3_link_req {
	char oldgfid[16];
	char newgfid[16];
	char *oldpath;
	char *newpath;
	char *newbname;
};
typedef struct gfs3_link_req gfs3_link_req;

struct gfs3_link_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	struct gf_iatt preparent;
	struct gf_iatt postparent;
};
typedef struct gfs3_link_rsp gfs3_link_rsp;

struct gfs3_truncate_req {
	char gfid[16];
	u_quad_t offset;
	char *path;
};
typedef struct gfs3_truncate_req gfs3_truncate_req;

struct gfs3_truncate_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt prestat;
	struct gf_iatt poststat;
};
typedef struct gfs3_truncate_rsp gfs3_truncate_rsp;

struct gfs3_open_req {
	char gfid[16];
	u_int flags;
	u_int wbflags;
	char *path;
};
typedef struct gfs3_open_req gfs3_open_req;

struct gfs3_open_rsp {
	int op_ret;
	int op_errno;
	quad_t fd;
};
typedef struct gfs3_open_rsp gfs3_open_rsp;

struct gfs3_read_req {
	char gfid[16];
	quad_t fd;
	u_quad_t offset;
	u_int size;
};
typedef struct gfs3_read_req gfs3_read_req;

struct gfs3_read_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	u_int size;
};
typedef struct gfs3_read_rsp gfs3_read_rsp;

struct gfs3_lookup_req {
	char gfid[16];
	char pargfid[16];
	u_int flags;
	char *path;
	char *bname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_lookup_req gfs3_lookup_req;

struct gfs3_lookup_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	struct gf_iatt postparent;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_lookup_rsp gfs3_lookup_rsp;

struct gfs3_write_req {
	char gfid[16];
	quad_t fd;
	u_quad_t offset;
	u_int size;
};
typedef struct gfs3_write_req gfs3_write_req;

struct gfs3_write_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt prestat;
	struct gf_iatt poststat;
};
typedef struct gfs3_write_rsp gfs3_write_rsp;

struct gfs3_statfs_req {
	char gfid[16];
	char *path;
};
typedef struct gfs3_statfs_req gfs3_statfs_req;

struct gfs3_statfs_rsp {
	int op_ret;
	int op_errno;
	struct gf_statfs statfs;
};
typedef struct gfs3_statfs_rsp gfs3_statfs_rsp;

struct gfs3_lk_req {
	char gfid[16];
	quad_t fd;
	u_int cmd;
	u_int type;
	struct gf_proto_flock flock;
};
typedef struct gfs3_lk_req gfs3_lk_req;

struct gfs3_lk_rsp {
	int op_ret;
	int op_errno;
	struct gf_proto_flock flock;
};
typedef struct gfs3_lk_rsp gfs3_lk_rsp;

struct gfs3_inodelk_req {
	char gfid[16];
	u_int cmd;
	u_int type;
	struct gf_proto_flock flock;
	char *path;
	char *volume;
};
typedef struct gfs3_inodelk_req gfs3_inodelk_req;

struct gfs3_finodelk_req {
	char gfid[16];
	quad_t fd;
	u_int cmd;
	u_int type;
	struct gf_proto_flock flock;
	char *volume;
};
typedef struct gfs3_finodelk_req gfs3_finodelk_req;

struct gfs3_flush_req {
	char gfid[16];
	quad_t fd;
};
typedef struct gfs3_flush_req gfs3_flush_req;

struct gfs3_fsync_req {
	char gfid[16];
	quad_t fd;
	u_int data;
};
typedef struct gfs3_fsync_req gfs3_fsync_req;

struct gfs3_fsync_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt prestat;
	struct gf_iatt poststat;
};
typedef struct gfs3_fsync_rsp gfs3_fsync_rsp;

struct gfs3_setxattr_req {
	char gfid[16];
	u_int flags;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
	char *path;
};
typedef struct gfs3_setxattr_req gfs3_setxattr_req;

struct gfs3_fsetxattr_req {
	char gfid[16];
	quad_t fd;
	u_int flags;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_fsetxattr_req gfs3_fsetxattr_req;

struct gfs3_xattrop_req {
	char gfid[16];
	u_int flags;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
	char *path;
};
typedef struct gfs3_xattrop_req gfs3_xattrop_req;

struct gfs3_xattrop_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_xattrop_rsp gfs3_xattrop_rsp;

struct gfs3_fxattrop_req {
	char gfid[16];
	quad_t fd;
	u_int flags;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_fxattrop_req gfs3_fxattrop_req;

struct gfs3_fxattrop_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_fxattrop_rsp gfs3_fxattrop_rsp;

struct gfs3_getxattr_req {
	char gfid[16];
	u_int namelen;
	char *path;
	char *name;
};
typedef struct gfs3_getxattr_req gfs3_getxattr_req;

struct gfs3_getxattr_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_getxattr_rsp gfs3_getxattr_rsp;

struct gfs3_fgetxattr_req {
	char gfid[16];
	quad_t fd;
	u_int namelen;
	char *name;
};
typedef struct gfs3_fgetxattr_req gfs3_fgetxattr_req;

struct gfs3_fgetxattr_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_fgetxattr_rsp gfs3_fgetxattr_rsp;

struct gfs3_removexattr_req {
	char gfid[16];
	char *path;
	char *name;
};
typedef struct gfs3_removexattr_req gfs3_removexattr_req;

struct gfs3_opendir_req {
	char gfid[16];
	char *path;
};
typedef struct gfs3_opendir_req gfs3_opendir_req;

struct gfs3_opendir_rsp {
	int op_ret;
	int op_errno;
	quad_t fd;
};
typedef struct gfs3_opendir_rsp gfs3_opendir_rsp;

struct gfs3_fsyncdir_req {
	char gfid[16];
	quad_t fd;
	int data;
};
typedef struct gfs3_fsyncdir_req gfs3_fsyncdir_req;

struct gfs3_readdir_req {
	char gfid[16];
	quad_t fd;
	u_quad_t offset;
	u_int size;
};
typedef struct gfs3_readdir_req gfs3_readdir_req;

struct gfs3_readdirp_req {
	char gfid[16];
	quad_t fd;
	u_quad_t offset;
	u_int size;
};
typedef struct gfs3_readdirp_req gfs3_readdirp_req;

struct gf_setvolume_req {
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf_setvolume_req gf_setvolume_req;

struct gf_setvolume_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf_setvolume_rsp gf_setvolume_rsp;

struct gfs3_access_req {
	char gfid[16];
	u_int mask;
	char *path;
};
typedef struct gfs3_access_req gfs3_access_req;

struct gfs3_create_req {
	char pargfid[16];
	u_int flags;
	u_int mode;
	char *path;
	char *bname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gfs3_create_req gfs3_create_req;

struct gfs3_create_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
	u_quad_t fd;
	struct gf_iatt preparent;
	struct gf_iatt postparent;
};
typedef struct gfs3_create_rsp gfs3_create_rsp;

struct gfs3_ftruncate_req {
	char gfid[16];
	quad_t fd;
	u_quad_t offset;
};
typedef struct gfs3_ftruncate_req gfs3_ftruncate_req;

struct gfs3_ftruncate_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt prestat;
	struct gf_iatt poststat;
};
typedef struct gfs3_ftruncate_rsp gfs3_ftruncate_rsp;

struct gfs3_fstat_req {
	char gfid[16];
	quad_t fd;
};
typedef struct gfs3_fstat_req gfs3_fstat_req;

struct gfs3_fstat_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt stat;
};
typedef struct gfs3_fstat_rsp gfs3_fstat_rsp;

struct gfs3_entrylk_req {
	char gfid[16];
	u_int cmd;
	u_int type;
	u_quad_t namelen;
	char *path;
	char *name;
	char *volume;
};
typedef struct gfs3_entrylk_req gfs3_entrylk_req;

struct gfs3_fentrylk_req {
	char gfid[16];
	quad_t fd;
	u_int cmd;
	u_int type;
	u_quad_t namelen;
	char *name;
	char *volume;
};
typedef struct gfs3_fentrylk_req gfs3_fentrylk_req;

struct gfs3_setattr_req {
	char gfid[16];
	struct gf_iatt stbuf;
	int valid;
	char *path;
};
typedef struct gfs3_setattr_req gfs3_setattr_req;

struct gfs3_setattr_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt statpre;
	struct gf_iatt statpost;
};
typedef struct gfs3_setattr_rsp gfs3_setattr_rsp;

struct gfs3_fsetattr_req {
	quad_t fd;
	struct gf_iatt stbuf;
	int valid;
};
typedef struct gfs3_fsetattr_req gfs3_fsetattr_req;

struct gfs3_fsetattr_rsp {
	int op_ret;
	int op_errno;
	struct gf_iatt statpre;
	struct gf_iatt statpost;
};
typedef struct gfs3_fsetattr_rsp gfs3_fsetattr_rsp;

struct gfs3_rchecksum_req {
	quad_t fd;
	u_quad_t offset;
	u_int len;
};
typedef struct gfs3_rchecksum_req gfs3_rchecksum_req;

struct gfs3_rchecksum_rsp {
	int op_ret;
	int op_errno;
	u_int weak_checksum;
	struct {
		u_int strong_checksum_len;
		char *strong_checksum_val;
	} strong_checksum;
};
typedef struct gfs3_rchecksum_rsp gfs3_rchecksum_rsp;

struct gf_getspec_req {
	u_int flags;
	char *key;
};
typedef struct gf_getspec_req gf_getspec_req;

struct gf_getspec_rsp {
	int op_ret;
	int op_errno;
	char *spec;
};
typedef struct gf_getspec_rsp gf_getspec_rsp;

struct gf_log_req {
	struct {
		u_int msg_len;
		char *msg_val;
	} msg;
};
typedef struct gf_log_req gf_log_req;

struct gf_notify_req {
	u_int flags;
	char *buf;
};
typedef struct gf_notify_req gf_notify_req;

struct gf_notify_rsp {
	int op_ret;
	int op_errno;
	u_int flags;
	char *buf;
};
typedef struct gf_notify_rsp gf_notify_rsp;

struct gfs3_releasedir_req {
	char gfid[16];
	quad_t fd;
};
typedef struct gfs3_releasedir_req gfs3_releasedir_req;

struct gfs3_release_req {
	char gfid[16];
	quad_t fd;
};
typedef struct gfs3_release_req gfs3_release_req;

struct gf_common_rsp {
	int op_ret;
	int op_errno;
};
typedef struct gf_common_rsp gf_common_rsp;

struct gfs3_dirlist {
	u_quad_t d_ino;
	u_quad_t d_off;
	u_int d_len;
	u_int d_type;
	char *name;
	struct gfs3_dirlist *nextentry;
};
typedef struct gfs3_dirlist gfs3_dirlist;

struct gfs3_readdir_rsp {
	int op_ret;
	int op_errno;
	struct gfs3_dirlist *reply;
};
typedef struct gfs3_readdir_rsp gfs3_readdir_rsp;

struct gfs3_dirplist {
	u_quad_t d_ino;
	u_quad_t d_off;
	u_int d_len;
	u_int d_type;
	char *name;
	struct gf_iatt stat;
	struct gfs3_dirplist *nextentry;
};
typedef struct gfs3_dirplist gfs3_dirplist;

struct gfs3_readdirp_rsp {
	int op_ret;
	int op_errno;
	struct gfs3_dirplist *reply;
};
typedef struct gfs3_readdirp_rsp gfs3_readdirp_rsp;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_gf_statfs (XDR *, gf_statfs*);
extern  bool_t xdr_gf_proto_flock (XDR *, gf_proto_flock*);
extern  bool_t xdr_gf_iatt (XDR *, gf_iatt*);
extern  bool_t xdr_gfs3_stat_req (XDR *, gfs3_stat_req*);
extern  bool_t xdr_gfs3_stat_rsp (XDR *, gfs3_stat_rsp*);
extern  bool_t xdr_gfs3_readlink_req (XDR *, gfs3_readlink_req*);
extern  bool_t xdr_gfs3_readlink_rsp (XDR *, gfs3_readlink_rsp*);
extern  bool_t xdr_gfs3_mknod_req (XDR *, gfs3_mknod_req*);
extern  bool_t xdr_gfs3_mknod_rsp (XDR *, gfs3_mknod_rsp*);
extern  bool_t xdr_gfs3_mkdir_req (XDR *, gfs3_mkdir_req*);
extern  bool_t xdr_gfs3_mkdir_rsp (XDR *, gfs3_mkdir_rsp*);
extern  bool_t xdr_gfs3_unlink_req (XDR *, gfs3_unlink_req*);
extern  bool_t xdr_gfs3_unlink_rsp (XDR *, gfs3_unlink_rsp*);
extern  bool_t xdr_gfs3_rmdir_req (XDR *, gfs3_rmdir_req*);
extern  bool_t xdr_gfs3_rmdir_rsp (XDR *, gfs3_rmdir_rsp*);
extern  bool_t xdr_gfs3_symlink_req (XDR *, gfs3_symlink_req*);
extern  bool_t xdr_gfs3_symlink_rsp (XDR *, gfs3_symlink_rsp*);
extern  bool_t xdr_gfs3_rename_req (XDR *, gfs3_rename_req*);
extern  bool_t xdr_gfs3_rename_rsp (XDR *, gfs3_rename_rsp*);
extern  bool_t xdr_gfs3_link_req (XDR *, gfs3_link_req*);
extern  bool_t xdr_gfs3_link_rsp (XDR *, gfs3_link_rsp*);
extern  bool_t xdr_gfs3_truncate_req (XDR *, gfs3_truncate_req*);
extern  bool_t xdr_gfs3_truncate_rsp (XDR *, gfs3_truncate_rsp*);
extern  bool_t xdr_gfs3_open_req (XDR *, gfs3_open_req*);
extern  bool_t xdr_gfs3_open_rsp (XDR *, gfs3_open_rsp*);
extern  bool_t xdr_gfs3_read_req (XDR *, gfs3_read_req*);
extern  bool_t xdr_gfs3_read_rsp (XDR *, gfs3_read_rsp*);
extern  bool_t xdr_gfs3_lookup_req (XDR *, gfs3_lookup_req*);
extern  bool_t xdr_gfs3_lookup_rsp (XDR *, gfs3_lookup_rsp*);
extern  bool_t xdr_gfs3_write_req (XDR *, gfs3_write_req*);
extern  bool_t xdr_gfs3_write_rsp (XDR *, gfs3_write_rsp*);
extern  bool_t xdr_gfs3_statfs_req (XDR *, gfs3_statfs_req*);
extern  bool_t xdr_gfs3_statfs_rsp (XDR *, gfs3_statfs_rsp*);
extern  bool_t xdr_gfs3_lk_req (XDR *, gfs3_lk_req*);
extern  bool_t xdr_gfs3_lk_rsp (XDR *, gfs3_lk_rsp*);
extern  bool_t xdr_gfs3_inodelk_req (XDR *, gfs3_inodelk_req*);
extern  bool_t xdr_gfs3_finodelk_req (XDR *, gfs3_finodelk_req*);
extern  bool_t xdr_gfs3_flush_req (XDR *, gfs3_flush_req*);
extern  bool_t xdr_gfs3_fsync_req (XDR *, gfs3_fsync_req*);
extern  bool_t xdr_gfs3_fsync_rsp (XDR *, gfs3_fsync_rsp*);
extern  bool_t xdr_gfs3_setxattr_req (XDR *, gfs3_setxattr_req*);
extern  bool_t xdr_gfs3_fsetxattr_req (XDR *, gfs3_fsetxattr_req*);
extern  bool_t xdr_gfs3_xattrop_req (XDR *, gfs3_xattrop_req*);
extern  bool_t xdr_gfs3_xattrop_rsp (XDR *, gfs3_xattrop_rsp*);
extern  bool_t xdr_gfs3_fxattrop_req (XDR *, gfs3_fxattrop_req*);
extern  bool_t xdr_gfs3_fxattrop_rsp (XDR *, gfs3_fxattrop_rsp*);
extern  bool_t xdr_gfs3_getxattr_req (XDR *, gfs3_getxattr_req*);
extern  bool_t xdr_gfs3_getxattr_rsp (XDR *, gfs3_getxattr_rsp*);
extern  bool_t xdr_gfs3_fgetxattr_req (XDR *, gfs3_fgetxattr_req*);
extern  bool_t xdr_gfs3_fgetxattr_rsp (XDR *, gfs3_fgetxattr_rsp*);
extern  bool_t xdr_gfs3_removexattr_req (XDR *, gfs3_removexattr_req*);
extern  bool_t xdr_gfs3_opendir_req (XDR *, gfs3_opendir_req*);
extern  bool_t xdr_gfs3_opendir_rsp (XDR *, gfs3_opendir_rsp*);
extern  bool_t xdr_gfs3_fsyncdir_req (XDR *, gfs3_fsyncdir_req*);
extern  bool_t xdr_gfs3_readdir_req (XDR *, gfs3_readdir_req*);
extern  bool_t xdr_gfs3_readdirp_req (XDR *, gfs3_readdirp_req*);
extern  bool_t xdr_gf_setvolume_req (XDR *, gf_setvolume_req*);
extern  bool_t xdr_gf_setvolume_rsp (XDR *, gf_setvolume_rsp*);
extern  bool_t xdr_gfs3_access_req (XDR *, gfs3_access_req*);
extern  bool_t xdr_gfs3_create_req (XDR *, gfs3_create_req*);
extern  bool_t xdr_gfs3_create_rsp (XDR *, gfs3_create_rsp*);
extern  bool_t xdr_gfs3_ftruncate_req (XDR *, gfs3_ftruncate_req*);
extern  bool_t xdr_gfs3_ftruncate_rsp (XDR *, gfs3_ftruncate_rsp*);
extern  bool_t xdr_gfs3_fstat_req (XDR *, gfs3_fstat_req*);
extern  bool_t xdr_gfs3_fstat_rsp (XDR *, gfs3_fstat_rsp*);
extern  bool_t xdr_gfs3_entrylk_req (XDR *, gfs3_entrylk_req*);
extern  bool_t xdr_gfs3_fentrylk_req (XDR *, gfs3_fentrylk_req*);
extern  bool_t xdr_gfs3_setattr_req (XDR *, gfs3_setattr_req*);
extern  bool_t xdr_gfs3_setattr_rsp (XDR *, gfs3_setattr_rsp*);
extern  bool_t xdr_gfs3_fsetattr_req (XDR *, gfs3_fsetattr_req*);
extern  bool_t xdr_gfs3_fsetattr_rsp (XDR *, gfs3_fsetattr_rsp*);
extern  bool_t xdr_gfs3_rchecksum_req (XDR *, gfs3_rchecksum_req*);
extern  bool_t xdr_gfs3_rchecksum_rsp (XDR *, gfs3_rchecksum_rsp*);
extern  bool_t xdr_gf_getspec_req (XDR *, gf_getspec_req*);
extern  bool_t xdr_gf_getspec_rsp (XDR *, gf_getspec_rsp*);
extern  bool_t xdr_gf_log_req (XDR *, gf_log_req*);
extern  bool_t xdr_gf_notify_req (XDR *, gf_notify_req*);
extern  bool_t xdr_gf_notify_rsp (XDR *, gf_notify_rsp*);
extern  bool_t xdr_gfs3_releasedir_req (XDR *, gfs3_releasedir_req*);
extern  bool_t xdr_gfs3_release_req (XDR *, gfs3_release_req*);
extern  bool_t xdr_gf_common_rsp (XDR *, gf_common_rsp*);
extern  bool_t xdr_gfs3_dirlist (XDR *, gfs3_dirlist*);
extern  bool_t xdr_gfs3_readdir_rsp (XDR *, gfs3_readdir_rsp*);
extern  bool_t xdr_gfs3_dirplist (XDR *, gfs3_dirplist*);
extern  bool_t xdr_gfs3_readdirp_rsp (XDR *, gfs3_readdirp_rsp*);

#else /* K&R C */
extern bool_t xdr_gf_statfs ();
extern bool_t xdr_gf_proto_flock ();
extern bool_t xdr_gf_iatt ();
extern bool_t xdr_gfs3_stat_req ();
extern bool_t xdr_gfs3_stat_rsp ();
extern bool_t xdr_gfs3_readlink_req ();
extern bool_t xdr_gfs3_readlink_rsp ();
extern bool_t xdr_gfs3_mknod_req ();
extern bool_t xdr_gfs3_mknod_rsp ();
extern bool_t xdr_gfs3_mkdir_req ();
extern bool_t xdr_gfs3_mkdir_rsp ();
extern bool_t xdr_gfs3_unlink_req ();
extern bool_t xdr_gfs3_unlink_rsp ();
extern bool_t xdr_gfs3_rmdir_req ();
extern bool_t xdr_gfs3_rmdir_rsp ();
extern bool_t xdr_gfs3_symlink_req ();
extern bool_t xdr_gfs3_symlink_rsp ();
extern bool_t xdr_gfs3_rename_req ();
extern bool_t xdr_gfs3_rename_rsp ();
extern bool_t xdr_gfs3_link_req ();
extern bool_t xdr_gfs3_link_rsp ();
extern bool_t xdr_gfs3_truncate_req ();
extern bool_t xdr_gfs3_truncate_rsp ();
extern bool_t xdr_gfs3_open_req ();
extern bool_t xdr_gfs3_open_rsp ();
extern bool_t xdr_gfs3_read_req ();
extern bool_t xdr_gfs3_read_rsp ();
extern bool_t xdr_gfs3_lookup_req ();
extern bool_t xdr_gfs3_lookup_rsp ();
extern bool_t xdr_gfs3_write_req ();
extern bool_t xdr_gfs3_write_rsp ();
extern bool_t xdr_gfs3_statfs_req ();
extern bool_t xdr_gfs3_statfs_rsp ();
extern bool_t xdr_gfs3_lk_req ();
extern bool_t xdr_gfs3_lk_rsp ();
extern bool_t xdr_gfs3_inodelk_req ();
extern bool_t xdr_gfs3_finodelk_req ();
extern bool_t xdr_gfs3_flush_req ();
extern bool_t xdr_gfs3_fsync_req ();
extern bool_t xdr_gfs3_fsync_rsp ();
extern bool_t xdr_gfs3_setxattr_req ();
extern bool_t xdr_gfs3_fsetxattr_req ();
extern bool_t xdr_gfs3_xattrop_req ();
extern bool_t xdr_gfs3_xattrop_rsp ();
extern bool_t xdr_gfs3_fxattrop_req ();
extern bool_t xdr_gfs3_fxattrop_rsp ();
extern bool_t xdr_gfs3_getxattr_req ();
extern bool_t xdr_gfs3_getxattr_rsp ();
extern bool_t xdr_gfs3_fgetxattr_req ();
extern bool_t xdr_gfs3_fgetxattr_rsp ();
extern bool_t xdr_gfs3_removexattr_req ();
extern bool_t xdr_gfs3_opendir_req ();
extern bool_t xdr_gfs3_opendir_rsp ();
extern bool_t xdr_gfs3_fsyncdir_req ();
extern bool_t xdr_gfs3_readdir_req ();
extern bool_t xdr_gfs3_readdirp_req ();
extern bool_t xdr_gf_setvolume_req ();
extern bool_t xdr_gf_setvolume_rsp ();
extern bool_t xdr_gfs3_access_req ();
extern bool_t xdr_gfs3_create_req ();
extern bool_t xdr_gfs3_create_rsp ();
extern bool_t xdr_gfs3_ftruncate_req ();
extern bool_t xdr_gfs3_ftruncate_rsp ();
extern bool_t xdr_gfs3_fstat_req ();
extern bool_t xdr_gfs3_fstat_rsp ();
extern bool_t xdr_gfs3_entrylk_req ();
extern bool_t xdr_gfs3_fentrylk_req ();
extern bool_t xdr_gfs3_setattr_req ();
extern bool_t xdr_gfs3_setattr_rsp ();
extern bool_t xdr_gfs3_fsetattr_req ();
extern bool_t xdr_gfs3_fsetattr_rsp ();
extern bool_t xdr_gfs3_rchecksum_req ();
extern bool_t xdr_gfs3_rchecksum_rsp ();
extern bool_t xdr_gf_getspec_req ();
extern bool_t xdr_gf_getspec_rsp ();
extern bool_t xdr_gf_log_req ();
extern bool_t xdr_gf_notify_req ();
extern bool_t xdr_gf_notify_rsp ();
extern bool_t xdr_gfs3_releasedir_req ();
extern bool_t xdr_gfs3_release_req ();
extern bool_t xdr_gf_common_rsp ();
extern bool_t xdr_gfs3_dirlist ();
extern bool_t xdr_gfs3_readdir_rsp ();
extern bool_t xdr_gfs3_dirplist ();
extern bool_t xdr_gfs3_readdirp_rsp ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GLUSTERFS3_H_RPCGEN */
