BRANCH=android-msm-lmi-4.19
KERNEL_DIR=private/msm-google
DEFCONFIG=lmi_user_defconfig
. ${ROOT_DIR}/${KERNEL_DIR}/build.config.gourami.common.clang
POST_DEFCONFIG_CMDS="check_defconfig"
