################################################################################
#
# Shell script for creating new .c files with stdheader
#
################################################################################

function new() {
	echo "void	ft_"$1"(void)
{
	
}" >> 'ft_'$1.c
	vim -E -c ":Stdheader" -c ":wq" $1'.c'
}
