### To do for SM analysis:

- [x] mu+tau trigger SFs disagreement with Vienna

- [x] m_tau cross trigger differences (pass/fail) with Vienna
- Think this is a problem on Viennas side

- [ ] event number differences with other groups?

- [ ] Run SV fit for all samples/energy scale/met shifts - do e->tau mu->tau ES shifts only apply to Zee/mm events? - if so then only need to run for DY/Z samples - if MET is shape systematic then will need to run for MET shifts as well

- [x] MET systematics as shape uncertainties or not?
- There are 2 MET shape systematics included unclusted and clustered which are added for all MC processes

- [ ] Find out how to compute MET unclustered and clustered systematic shifts and add to datacards
- unclustered = UnclusterEnUp/Down shift, clustered = JetEnUp/Down shift (requires new ntuples with shifts stored)

- [x] W+gamma samples for emu channel only?
- Yes it is included for emu only and is added to the W templates

- [x] H->WW background - add these as seperate templates for em channel only called ggH_hww125 and qqH_hww125

- [x] Add EWk Z as seperate template called EWKZ I presume this is not split by any gen matching

- [x] No Ewk W included?
- Ewk W is added to the W shape templates for the et and mt channel. It is also included in the templates for the em and tt channel

- [x] Z->mumu correction for mjj shape (and systematic)?

- [x] background method for W - OSSS simultanious equations method?
- No is slightly different method - added method = 21 to plotting code to do this!

- [x] W CR mT > 80 GeV
- [ ] W CR for boosted used to constrain VBF - what to use as nominal estimate for W in VBF category

- [ ] QCD CR - boosted used to constrain VBF so same comments as above

- [x] mu->tau ES correction uncertainty = 1.5 %
e->tau ES correction uncertainty = 3 % 

- [x] above 2 uncetainties seperate for different DMs but shold the uncertainty be included for 3-prong decays as well?
- this is not included  for the 3prong decays and the systematic shifts are only included for ZL templates in et and mt channels

- [x] n_bjets==0 for emu channel only?
- Yes looks like this is for emu only

- [x] JES uncertainties - implemented at the moment as seperate shifts - maybe better to add relevant variables (n_jets_X, n_bjets_X, mjj_X etc ....) for each JES shift X - use seperate module to do this after HTTCategories? - e.g copy HTTCateogry tree somehow and add extra branches?

- [x] For plotting code make sure trees are only run over once for all systematics - relevant for JES corrections after change described above

- [ ] write script to make datacards and add required systematics to plotting code

- [ ] check how sampls are split into real and fake e.g TTJ and TTT because something I read suggested TTT contains only events where 1 tau is real (for et and mt) and where both taus are real - we currently include all genuine taus and l->tau fakes in the TTT teamples

- [x] Check naming of SM H templates should be e.g ggH_httM where M=mass

- [x] Find out what CMS_tauDMReco_, and CMS_mFakeTau_1prong_$ERA shape sytematics are (to do with fake-rate/ ID uncertainty? - but in bins of DM so affects shape also?)
- 3% tau ID uncertainty in bins of DM plus e/mu->tau fake-rate uncertainties in bins of DM (DM=0,1)

- [ ] Find out what TopMassTreatment_$ERA theory uncertainty is for ggH and add template to datacards

- [ ] Include shape uncertainty on QCD in et and mt channels due to W subtraction vary W norm in SS region by 10% (0 jet/ boosted) and 30% (VBF)