/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bylee <bylee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:11:56 by bylee             #+#    #+#             */
/*   Updated: 2022/05/22 21:12:07 by bylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HPP
# define LIBFT_HPP

# include "Webserv.hpp"

std::string               ltrimString(const std::string& str, const std::string& seps = " ");
std::string               rtrimString(const std::string& str, const std::string& seps = " ");
std::string               trimString(const std::string& str, const std::string& seps = " ");
std::string               getStringFromFile(const std::string& file_path, int max_size = -1);
std::vector<std::string>  splitStringByChar(std::string str, char c = '\n');
std::vector<std::string>  groupLineWithCondition(std::vector<std::string>& lines, \
  const std::string& start_line, const std::string& end_line, IncludeMode mode = INCLUDE_BOTH);
std::map<std::string, std::string> stringVectorToMap(std::vector<std::string> stringVector, char sep = ':');

bool isValidIpByte(std::string s);

template <typename T>
std::string containerToString(T container, std::string sep){
  std::string result;
  for (typename T::iterator it = container.begin(); it != container.end(); it++){
    result.append(*it);
    if (++it != container.end())
      result.append(sep);
    --it;
  }
  return (result);
}

template <typename T, typename V>
bool hasKey(T container, V value) { return (container.find(value) != container.end()); }

#endif
