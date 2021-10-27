#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*ret;

	if (lst == 0)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		ret = ft_lstnew((*f)(lst->content));
		if (!ret)
		{
			ft_lstclear(&new_lst, del);
		}
		ft_lstadd_back(&new_lst, ret);
		lst = lst->next;
	}
	return (new_lst);
}
