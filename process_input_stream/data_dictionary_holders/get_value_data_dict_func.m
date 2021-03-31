function data_value = get_value_data_dict_func(dictionary_name, entry_name)
%GET_DATA_D Summary of this function goes here
% dictionary_name - dictionary name string, requires .sldd suffix
% entry_name - entry name string
dictionary_obj = Simulink.data.dictionary.open(dictionary_name);
data_section_obj = getSection(dictionary_obj,'Design Data');
data_obj = getEntry(data_section_obj, entry_name);
data_value = getValue(data_obj);
% close(dictionary_obj);

end

