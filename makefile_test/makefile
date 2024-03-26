SUBDIRS = helloworld max

ALL : all 
 
all :
	@list='$(SUBDIRS)'; \
	for sudir in $$list; \
		do \
			cd $$sudir; \
			make; \
			cd ..; \
		done 

.PHONY : clean
clean :
	@list='$(SUBDIRS)'; \
	for sudir in $$list; \
		do \
			cd $$sudir; \
			make clean; \
			cd ..; \
		done