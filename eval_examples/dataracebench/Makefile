BOUND_VERIFY=civl verify -ompNoSimplify -input_omp_thread_max=10 -inputBOUND=10
VERIFY=civl verify -ompNoSimplify -input_omp_thread_max=10

all: all_yes all_no

all_yes: $(patsubst  %.c, C_%, $(wildcard *yes.c))

all_no: $(patsubst  %.c, C_%, $(wildcard *no.c))

C_%: %.c
	$(BOUND_VERIFY) $<

C_DRB023-sections1-orig-yes:  DRB023-sections1-orig-yes.c
	$(VERIFY) $<

C_DRB051-getthreadnum-orig-no: DRB051-getthreadnum-orig-no.c
	$(VERIFY) $<

C_DRB059-lastprivate-orig-no:  DRB059-lastprivate-orig-no.c
	$(VERIFY) $<

C_DRB069-sectionslock1-orig-no: DRB069-sectionslock1-orig-no.c
	$(VERIFY) $<

C_DRB075-getthreadnum-orig-yes: DRB075-getthreadnum-orig-yes.c
	$(VERIFY) $<

C_DRB076-flush-orig-no: DRB076-flush-orig-no.c
	$(VERIFY) $<

C_DRB077-single-orig-no: DRB077-single-orig-no.c
	$(VERIFY) $<

C_DRB088-dynamic-storage-orig-yes: DRB088-dynamic-storage-orig-yes.c
	$(VERIFY) $<

C_DRB089-dynamic-storage2-orig-yes: DRB089-dynamic-storage2-orig-yes.c
	$(VERIFY) $<

C_DRB103-master-orig-no: DRB103-master-orig-no.c
	$(VERIFY) $<

C_DRB120-barrier-orig-no: DRB120-barrier-orig-no.c
	$(VERIFY) $<

C_DRB121-reduction-orig-no: DRB121-reduction-orig-no.c
	$(VERIFY) $<

C_DRB124-master-orig-yes: DRB124-master-orig-yes.c
	$(VERIFY) $<

C_DRB125-single-orig-no: DRB125-single-orig-no.c
	$(VERIFY) $<

C_DRB126-firstprivatesections-orig-no: DRB126-firstprivatesections-orig-no.c
	$(VERIFY) $<

C_DRB139-worksharingcritical-orig-no: DRB139-worksharingcritical-orig-no.c
	$(VERIFY) $<

C_DRB043-adi-parallel-no: DRB043-adi-parallel-no.c
	$(VERIFY) -inputBOUND=4 $<

C_DRB058-jacobikernel-orig-no: DRB058-jacobikernel-orig-no.c
	$(VERIFY) -inputBOUND=5 $<

clean:
	rm -rf CIVLREP *~
