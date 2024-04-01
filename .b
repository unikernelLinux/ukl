define bl
	break dl-load.c:$arg0
end
define bo
	break *(_dl_map_object+$arg0)
end
bl 2000
